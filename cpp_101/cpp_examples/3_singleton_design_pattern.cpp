#include <iostream>

using std::cout;
using std::endl;

class Singleton
{
protected:
    Singleton() = default;

public:

    int data;

    static Singleton& get_instance()
    {
        static Singleton instance;
        return instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton& operator=(Singleton&&) = delete;

};

int main()
{
    // Singleton bad_singleton; // error
    Singleton &singleton1 = Singleton::get_instance();

    singleton1.data = 20;

    cout << "singleton1.data = " << singleton1.data << endl;

    Singleton &singleton2 = Singleton::get_instance();

    cout << "singleton2.data = " << singleton2.data << endl;

    Singleton::get_instance().data = 50;
    cout << "singleton1.data = " << singleton1.data << endl;
    cout << "singleton2.data = " << singleton2.data << endl;

    // Should delete it!
    // Singleton singletonN = singleton1;
    // singletonN.data = 100;
    // cout << "singleton1.data = " << singleton1.data << endl;
    // cout << "singletonN.data = " << singletonN.data << endl;

    return 0;
}