#include <iostream>
#include <array>

using namespace std;

// void func1(int arr[])
// {
//     for (int element : arr)
//     {
//         cout << element << endl;
//     }
// }

int main()
{

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int element : arr)
    {
        cout << element << endl;
    }
    
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    cout << endl;

    for (int element : {1, 2, 3, 4, 5})
    {
        cout << element << endl;
    }

    array<int, 10> myarray = {9, 8, 7 ,6, 5};
    for (int element : myarray)
    {
        cout << element << endl;
    }

    cout << endl;

    char string[] = "some characters in a string!";

    int s_count = 0;
    for (char c : string)
    {
        if (c == 's') s_count++;
    }

    cout << "s count: " << s_count << endl << endl;

    return 0;
}