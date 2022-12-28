#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int area = 123;

    // cout << setfill('*') << setw(6) << area << endl;
    // cout << setfill('*') << left;
    // cout << setw(6) << area << endl;
    // cout << 12345 << endl;

    cout << endl;

    cout << "Rectangle Area Table";
    cout << endl << endl;

    cout << left;
    cout << setw(10) << "Length";
    cout << setw(10) << "Width";
    cout << right;
    cout << setw(4) << "Area";
    cout << endl;

    for (int i = 0; i < 24; i++) cout << "*";
    cout << endl;

    for (int length = 5; length <= 25; length+=5)
    {
        for (int width = 2; width <= 10; width+=2)
        {
            cout << left;
            cout << setw(10) << length;
            cout << setw(10) << width;
            cout << right;
            cout << setw(4) << length * width;
            cout << endl;
        }
    }

    return 0;
}