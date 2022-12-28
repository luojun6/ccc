#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int number = 17;

    cout << "number: " << number << endl;
    cout << "number: " <<  setbase(8) << number << endl;
    cout << 18 << endl;
    cout << 123.123 << endl;

    cout << "number: " <<  setbase(16) << number << endl;
    cout << "number: " <<  setbase(10) << number << endl;

    for (int i = 0; i <= 32; i++)
    {
        cout << setbase(10) << i << " ";
        cout << setbase(8) << i << " ";
        cout << setbase(16) << i << endl;
    }

    return 0;
}