#include <iostream>

using namespace std;

int main()
{
    int value;
    cout << "Enter Value(1-3): ";
    cin >> value;

    switch(value + 1)
    {
        case 1:
            cout << "Case 1 Matches!" << endl;
            break;
        case 2:
            cout << "Case 2 Matches!" << endl;
            break;
        case 3:
            cout << "Case 3 Matches!" << endl;
            if (value >= 1)
                cout << "Value >= 1" << endl;
            [[fallthrough]];
        default:
            cout << "Default Cases!" << endl;
            // break;
            cout << "Value: " << value << endl;
    }

    return 0;
}

// g++ -Wimplicit-fallthrough 69_switch_statements.cpp -std=c++17