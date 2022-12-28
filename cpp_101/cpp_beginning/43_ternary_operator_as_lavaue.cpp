#include <iostream>

using namespace std;

int main()
{
    // int input;

    // cout << "Input: ";
    // cin>>input;

    // int x = (input == 2 ? 100 : 200);
    // cout << "x: " << x << endl;

    int grade = 0;
    int pass_total = 0;
    int fail_total = 0;

    while (true)
    {
        cout << "Enter grade (-1 To Quit): ";
        cin >> grade;

        if (grade == -1) break;

        // if (grade >= 50) pass_total += 1;
        // else fail_total += 1;
        (grade >= 50 ? pass_total : fail_total) += 1;

        cout << "pass_total: " << pass_total << endl;
        cout << "fail_total: " << fail_total << endl;
    }

    return 0;
}