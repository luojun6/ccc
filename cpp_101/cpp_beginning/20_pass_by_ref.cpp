#include <iostream>

using namespace std;

class Counter
{
private:
    int _count;
public:
    Counter()
    {
        _count = 0;
    }

    void print()
    {
        cout << "count: " << _count << endl;
    }

    void increment()
    {
        _count++;
    }
};

void increment(int& x)
{
    x++;
    cout << "x after increment: " << x << endl;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void increment_3x(Counter& counter)
{
    counter.increment();
    counter.increment();
    counter.increment();
}

int main()
{

    int a = 4;

    cout << "a before: " << a << endl;
    increment(a);
    cout << "a after: " << a << endl;

    int b = 4;
    int c = 7;

    cout << "BEFORE b: " << b << ", c: " << c << endl;
    swap(b, c);
    cout << "AFTER b: " << b << ", c: " << c << endl;

    Counter counter;
    counter.print();
    increment_3x(counter);
    counter.print();


    return 0;
}