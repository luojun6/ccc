#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name;

    cout << "Enter Full Name: ";
    // cin >> name;
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    char char_name[100];

    cout << "Enter Full Name Again: ";
    cin.getline(char_name, 100);
    cout << "Hello, " << char_name << "!" << endl;
}