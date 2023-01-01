#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout << "non-template sum" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

template <typename T>
T sum(T a, T b)
{
    cout << "template sum" << endl;
    return a + b;
}

template <typename T>
T sum(T a, T b, T c)
{
    return a + b + c;
}

int main()
{

    cout << sum(2, 5) << endl;
    cout << sum(1, 2, 3) << endl;

    cout << sum<double>(2.0, 3.5) << endl;
    cout << sum<double>(2.0, 3.5, 1.2) << endl;

    return 0;
}