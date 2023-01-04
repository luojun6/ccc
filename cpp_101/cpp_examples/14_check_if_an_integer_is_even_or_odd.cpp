#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool is_even(int number);

int main()
{

    int number = 0;

    cout << "Enter Integer: ";
    cin >> number;

    if (is_even(number)) cout << "It's a even!" << endl;
    else cout << "It's odd!" << endl;

    return 0;
}

bool is_even(int number)
{
    return (number % 2 == 0);
}