#include <iostream>

using namespace std;

// class IntArray
// {
// public:

//     int array[10];

//     void fill(int value)
//     {
//         for (int i = 0; i < 10; i++)
//             array[i] = value;
//     }

//     int& at(int index)
//     {
//         return array[index];
//     }

// };

// class StringArray
// {
// public:

//     string array[10];

//     void fill(string value)
//     {
//         for (int i = 0; i < 10; i++)
//             array[i] = value;
//     }

//     string& at(int index)
//     {
//         return array[index];
//     }

// };

template <typename T, int length>
class Array
{
public:

    T array[length];

    void fill(T value)
    {
        for (int i = 0; i < length; i++)
            array[i] = value;
    }

    T& at(int index)
    {
        return array[index];
    }

};

int main()
{

    Array<int, 5> intArr;

    intArr.fill(2);

    cout << "intArray[4]: " << intArr.at(4) << endl; 

    Array<string, 8> strArr;

    strArr.fill("abc");
    for (int i = 0; i < 8; i++)
        cout << "strArr[" << i << "]: " << strArr.at(i) << " " << endl;

    // int x;
    // cin >> x;
    // Array<double, x> xArr; // Error!!! 
    // The template argument determined at complie-time, not runtime.

    return 0;   
}