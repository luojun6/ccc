#include <iostream>

using namespace std;

class Counter
{
    friend void set_to_zero(Counter &counter);

    friend Counter operator+(Counter c1, Counter c2);
    
    friend Counter operator*(int m, Counter counter);

private:
    int count;

public:
    Counter(int count) : count(count) {}

    void print()
    {
        cout << count << endl;
    }

    void increment()
    {
        count++;
    }

    // Counter operator+(Counter const &counter)
    // {
    //     Counter new_counter(count + counter.count);
    //     return new_counter;
    // }

    Counter operator*(int m)
    {
        int new_count = count * m;
        return Counter(new_count);
    }

};

void set_to_zero(Counter &counter)
{
    counter.count = 0;
}

Counter operator+(Counter c1, Counter c2)
{
    int new_counter = c1.count + c2.count;
    return Counter(new_counter);
}

Counter operator*(int m, Counter counter)
{
    int new_count = m * counter.count;
    return Counter(new_count);
}

int main()
{
    Counter counter1(7);
    counter1.increment();
    counter1.print();

    Counter counter2(3);
    counter2.print();

    Counter counter3 = counter1 + counter2;
    counter3.print();
    set_to_zero(counter3);
    counter3.print();

    Counter counter4(5);
    Counter counter5 = 20 * counter4;
    counter5.print();

    Counter counter6 = counter5 * 4;
    counter6.print();

    return 0;
}

// We cannot use a member function for operator
// overloading when the left member is not a class 
// OR it is a class we can't modify.add_pointer

// Notably, we cannot overload the << stream insertion 
// operator as a member function because doing so 
// requires a function with << as the left operand!

// C++ does not allow these operators to be overloaded
// using a friend function:

//     assignment: =
//     function call: ()
//     member selection (arrow): ->