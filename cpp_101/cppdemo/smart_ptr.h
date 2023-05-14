#ifndef smart_ptr_h
#define smart_ptr_h
#include <utility>  // std::swap

class shared_count
{
public:
    shared_count() noexcept : count_(1) {}
    void add_count() noexcept
    {
        ++count_;
    }
    long reduce_count() noexcept
    {
        return --count_;
    }
    long get_count() const noexcept
    {
        return count_;
    }

private:
    long count_;
};

template <typename T>
class smart_ptr
{
public:
    template <typename U>
    friend class smart_ptr;
    
    explicit smart_ptr(T* ptr = nullptr) : ptr_(ptr)
    {
        if (ptr)
        {
            shared_count_ = new shared_count();
        }
    }
    ~smart_ptr()
    {
        if (ptr_ && !shared_count_->reduce_count())
        {
            delete ptr_;
            delete shared_count_;
        }
    }
    
    T* get() const { return ptr_; }
    
    T& operator*() const { return *ptr_; }
    T* operator->() const { return ptr_; }
    operator bool() const { return ptr_; }

//   Used for unique_ptr
//    smart_ptr(const smart_ptr&) = delete;
//    smart_ptr& operator=(const smart_ptr&) = delete;

//    smart_ptr(const smart_ptr& other)
    smart_ptr(const smart_ptr& other) noexcept
    {
        ptr_ = other.ptr_;
        if (ptr_)
        {
            other.shared_count_->add_count();
            shared_count_ = other.shared_count_;
        }
    }
    
    template <typename U>
//    smart_ptr(const smart_ptr<U>& other)
    smart_ptr(const smart_ptr<U>& other) noexcept
    {
        ptr_ = other.ptr_;
        if (ptr_) {
            other.shared_count_->add_count();
            shared_count_ = other.shared_count_;
        }
    }
    
    // Constructor for type casting
    template <typename U>
    smart_ptr(const smart_ptr<U>& other, T* ptr) noexcept
    {
        ptr_ = ptr;
        if (ptr_) {
            other.shared_count_->add_count();
            shared_count_ = other.shared_count_;
        }
    }

//  Used for unique_ptr
//    template <typename U>
//    smart_ptr(smart_ptr<U>&& other)
//    {
//        ptr_ = other.release();
//    }
    template <typename U>
//    smart_ptr(smart_ptr<U>&& other)
    smart_ptr(smart_ptr<U>&& other) noexcept
    {
        ptr_ = other.ptr_;
        if (ptr_) {
            shared_count_ = other.shared_count_;
            other.ptr_ = nullptr;
            
        }
    }
    
//    smart_ptr& operator=(smart_ptr& rhs)
//    {
//        smart_ptr(rhs).swap(*this);
//        return *this;
//    }
    
    smart_ptr& operator=(smart_ptr rhs) noexcept
    {
        rhs.swap(*this);
        return *this;
    }
    
    T* release()
    {
        T* ptr = ptr_;
        ptr_ = nullptr;
        return ptr;
        
    }
    
    long use_count() const
    {
      if (ptr_) { return shared_count_->get_count(); }
      else { return 0; }
    }
    
//    void swap(smart_ptr& rhs)
    void swap(smart_ptr& rhs) noexcept
    {
        using std::swap;
        swap(ptr_, rhs.ptr_); // Need to #include <utility>
        swap(shared_count_, rhs.shared_count_);
    }
    
private:
    T* ptr_;
    shared_count* shared_count_;
};

template <class T, class... Args>
smart_ptr<T> make_shared (Args&&... args)
{
    T* ptr = new T(std::forward<Args...>(args...));
    return smart_ptr<T>(ptr);
}

template <typename T, typename U>
smart_ptr<T> dynamic_pointer_cast(
  const smart_ptr<U>& other) noexcept
{
    T* ptr = dynamic_cast<T*>(other.get());
    return smart_ptr<T>(other, ptr);
}

template <typename T, typename U>
smart_ptr<T> static_pointer_cast(
  const smart_ptr<U>& other) noexcept
{
    T* ptr = static_cast<T*>(other.get());
    return smart_ptr<T>(other, ptr);
}

template <typename T, typename U>
smart_ptr<T> reinterpret_pointer_cast(
  const smart_ptr<U>& other) noexcept
{
    T* ptr = reinterpret_cast<T*>(other.get());
    return smart_ptr<T>(other, ptr);
}

template <typename T, typename U>
smart_ptr<T> const_pointer_cast(
  const smart_ptr<U>& other) noexcept
{
    T* ptr = const_cast<T*>(other.get());
    return smart_ptr<T>(other, ptr);
}

template <typename T>
void swap(smart_ptr<T>& lhs,
          smart_ptr<T>& rhs) noexcept
{
    lhs.swap(rhs);
}

#endif /* smart_ptr_h */

