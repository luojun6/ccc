#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int height = 0;
    cout << "Height: ";
    cin >> height;

    cout << endl;

    for (int i = 1; i <= height; i++)
    {
        int start_count = (i * 2) - 1;
        int space_count = height - i + 1;

        for (int j = 0; j < space_count; j++)
            cout << " ";

        for (int j = 0; j < start_count; j++)
            cout << "*";

        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < height; j++)
            cout << " ";

        cout << "*";
        cout << endl;
    }

    return 0;
}