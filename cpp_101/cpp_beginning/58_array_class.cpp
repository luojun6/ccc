#include <iostream>
#include <array>

using namespace std;

void print_array(array<int, 5> arr)
{
    cout << "Array: ";
    for (int element : arr)
        cout << element << " ";
    cout << endl;

}

int main()
{

    // C style array
    int array1[5] = {1, 2, 3, 4, 5};
    cout << array1[1] << endl;
    array1[1] = 10;
    cout << array1[1] << endl;

    // C++ style array
    array<int, 5> array2 = {1, 2, 3, 4, 5};
    cout << array2[1] << endl;
    array2[1] = 10;
    cout << array2[1] << endl;
    cout << "array2.at(2): " << array2.at(2) << endl;
    cout << "array2.front(): " << array2.front() << endl;
    cout << "array2.back(): " << array2.back() << endl;
    cout << "array2.size(): " << array2.size() << endl;
    cout << "array2.max_size(): " << array2.max_size() << endl;

    for (int i = 0; i < array2.size(); i++)
        cout << "array2[" << i << "] = " << array2[i] << endl;


    array<int, 5> array3;
    array3.fill(10);

    for (int i = 0; i < array3.size(); i++)
        cout << "array3[" << i << "] = " << array3[i] << endl;

    array2.swap(array3);

    cout << "Array3: ";
    for (int element : array3)
        cout << element << " ";
    cout << endl;

    if (array2.empty()) cout << "array2 is empty" << endl;
    else cout << "array2 is not empty" << endl; 

    int *ptr = array2.data();
    *(ptr + 2) = 20;
    ptr[3] = 30;

    // cout << "Array2: ";
    // for (int element : array2)
    //     cout << element << " ";
    // cout << endl;
    print_array(array2);

    cout << "Array (iterator print): ";
    // for (array<int, 5>::iterator it = array2.begin(); 
    for (auto it = array2.begin(); 
         it != array2.end();
         it++)
        {
            cout << *it << " ";
        }
    cout << endl;

    cout << "Array (iterator print): ";
    for (auto it = array2.rbegin(); 
         it != array2.rend();
         it++)
        {
            cout << *it << " ";
        }
    cout << endl;

    cout << "Array (iterator print): ";
    for (auto it = rbegin(array2); 
         it != array2.rend();
         it++)
        {
            cout << *it << " ";
        }
    cout << endl;

    try
    {
        array2.at(5);
    }
    catch(const out_of_range& orr)
    {
        cout << "ERROR OUT OF RANGE: " << orr.what() << endl;
    }
    

    return 0;
}