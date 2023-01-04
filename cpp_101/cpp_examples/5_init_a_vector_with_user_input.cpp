#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;


int main()
{

    // cout << "Number of elements: ";
    // int total = 0;
    // cin >> total;

    // std::vector<int> data(total);
    // for (int i = 0; i < total; i++)
    // {
    //     cout << "Element " << i << ": ";
    //     cin >> data[i];
    // }


    std::vector<int> data;
    int i = 0;
    int value = 0;
    cout << "Enter -1 to complete input!" << endl;
    while(true)
    {
        cout << "Element " << i << ": ";
        cin >> value;
        if (value == -1) break;
        data.push_back(value);
        i++;
    }

    for (auto elem : data)
    cout << elem << " ";
    cout << endl;


    return 0;
}
