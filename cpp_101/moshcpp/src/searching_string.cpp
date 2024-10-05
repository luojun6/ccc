#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Jun Luo";

    cout << name.find('L') << endl;

    if (name.find("Ant") == -1)
        cout << "Doesn't Exist!" << endl;

    cout << name.find("Jun") << endl;

    cout << name.find_last_of('u') << endl;

    cout << name.find_last_not_of('u') << endl;

    return 0;
}