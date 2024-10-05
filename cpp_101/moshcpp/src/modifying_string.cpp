#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Jun";

    name.append(" Luo");
    cout << name << endl;


    name.insert(0, "I am ");
    cout << name << endl;

    name.erase(0, 4);
    cout << name << endl;

    name.replace(0, 4, "I am");
    cout << name << endl;

    return 0;
}