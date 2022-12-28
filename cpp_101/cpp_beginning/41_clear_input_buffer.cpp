#include <iostream>
#include <limits>

using namespace std;

int main()
{

    int number = 0;
    cout << "number: ";
    cin >> number;

    // Add this code 
    // cin.ignore(1, '\n'); // just ignore one character 
    // cin.ignore(4, '\n'); // ignore four characters
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    char line[256];
    cout << "line: ";
    cin.getline(line, 256);

    cout << endl;
    cout << "number: " << number << endl;
    cout << "line: " << line << endl;

    return 0;
}