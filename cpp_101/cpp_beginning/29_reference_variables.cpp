#include <iostream>

using namespace std;

void increment(int &x)
{
    x++;
}

int &get_max_val(int array[], int length)
{
    int max_index = 0;
    for (int i = 1; i < length; i++)
        if (array[i] > array[max_index]) max_index = i;

    return array[max_index];
}

int func(int x)
{
    return 3 * x;
}

int (&triple)(int)  = func;

int main()
{
    int a = 5;

    int &b = a;

    b++;
    a++;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // int &c; // Error
    // int &c = NULL; // Error
    // int &c = 20; // Warining

    int c = 20;
    
    b = c;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int array[] = {1, 2, 3, 4, 5};
    int &ref = array[2];
    ref += 10;
    for (int i = 0; i < 5; i++)
        cout << "array[" << i << "]" << array[i] << endl;

    int m =4;
    increment(m);
    cout << "m: " << m << endl;

    int &max_val = get_max_val(array, 5);

    return 0;
}