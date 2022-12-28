#include <iostream>

using namespace std;

void known_loop();
void unknown_loop();

int main()
{
    // known_loop();
    unknown_loop();

    return 0;
}

void unknown_loop()
{
    int sum = 0;
    int number = 0;

    while (number != -1)
    {
        cout << "Enter Positive Integer (Or -1 to Quit): ";
        cin >> number;

        if (number <=0 && number != -1)
        {
            cout << "Number must be a positive number!" << endl;
            break;

        }

        if (number != -1) sum = sum + number;
    }

    cout << "sum: " << sum << endl;
}

void known_loop()
{
    int i = 1;

    cout << "Start the known counts loop!" << endl;

    while (i <= 10)
    {
        cout << i << endl;

        if (i == 2)
        {
            i = i + 2;
            continue;
        }

        if (i == 7) break;

        i++;
    }

    cout << "while loop done!" << endl;
}