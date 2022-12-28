#include <iostream>

using namespace std;

int add(int a=0, int b=0, int c=0);

void print(int a, double b=2)
{
    cout << a << endl;
    cout << b << endl;
}

void print(int a, char b='d')
{
    cout << a << endl;
    cout << b << endl;
}

int main()
{

    cout << add(1, 2, 3) << endl;
    cout << add(2, 3) << endl;
    cout << add(8) << endl;
    cout << add() << endl;

    print(4, 7.7);
    print(4, 'a');
    // print(4); // Error!

    return 0;
}

// int add(int a=0, int b=0, int c=0) // Error
int add(int a, int b, int c)
{
    return a + b +c;
}