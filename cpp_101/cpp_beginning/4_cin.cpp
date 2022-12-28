#include <iostream>

using namespace std;

int main()
{

    // int x;
    // cout << "Enter an integer: ";
    // if (cin >> x)
    // {
    //     cout << "You entered the integer " << x << endl;
    // }
    // else
    // {
    //     cin.clear();
    //     cout << "Invalid input" << endl;
    // }

    // // Ignore the next 1000 input until the newline
    // cin.ignore(1000, '\n');
    // // To make the the following codes work

    // double height = 0;
    // double width = 0;
    // double area = 0;

    // cout << "Enter height and width (separated by a space): ";
    // cin >> height >> width;
    // area = height * width;
    // cout << "The area: " << area << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << "!" << endl;

    return 0;
}