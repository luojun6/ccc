#include <iostream>

using namespace std;

template <typename T>
T find_max(T a, T b)
{
    if(a > b) return a;
    else return b;
}

template <typename T1, typename T2>
int find_max_size(T1 a, T2 b)
{
    if (sizeof(a) > sizeof(b)) return sizeof(a);
    else return sizeof(b);

}

// double find_max(double a, double b)
// {
//     if(a > b) return a;
//     else return b;
// }

// int find_max(int a, int b)
// {
//     if (a > b) return a;
//     else return b;
// }


int main()
{
    double x = 10.6;
    double y = 5.3;

    double max_double = find_max<double>(x, y);
    cout << "max_double: " << max_double << endl;

    int a = 10;
    int b = 5;

    int max_int = find_max<int>(a, b);
    cout << "max_int: " << max_int << endl;

    int max_size = find_max_size(x, a);
    cout << "max_size: " << max_size << endl;

    return 0;
}