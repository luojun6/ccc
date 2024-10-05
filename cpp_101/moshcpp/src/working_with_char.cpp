#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Jun Luo";

    cout << islower(name[0]) << endl;
    cout << isupper(name[0]) << endl;
    cout << isalpha(name[0]) << endl;
    cout << isdigit(name[0]) << endl;
    cout << isspace(name[0]) << endl;
    // ... 

    return 0;
}