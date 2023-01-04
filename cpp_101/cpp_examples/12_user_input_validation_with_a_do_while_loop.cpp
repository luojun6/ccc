#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int month;

    do
    {
        cout << "Month (1-12): ";

        cin >> month;

        if (month <= 0 || month >= 13)
        {
            cout << "Invalid month entered!" << endl;
            cout << "Month must be between 1-12." << endl;
            continue;;
        }
    } while (month <= 0 || month >= 13); 

    cout << "Month entered: " << month << endl;


    return 0;
}