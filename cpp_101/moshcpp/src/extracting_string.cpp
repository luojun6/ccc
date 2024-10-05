#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Jun Luo";
    size_t index = name.find(' ');
    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1);

    cout << "(" << firstName << ")" << endl;
    cout << "(" << lastName << ")" << endl;

    return 0;
}