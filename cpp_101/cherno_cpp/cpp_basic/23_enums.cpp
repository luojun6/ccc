#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum EnumExample
{
    A, B, C
};

int main()
{
    EnumExample enum_value = B;

    if (enum_value == 1)
        cout << "Hello B" << endl;
    else cout << "Where are you, B?" << endl; 

    return 0;
}