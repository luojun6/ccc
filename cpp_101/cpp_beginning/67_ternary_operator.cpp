#include <iostream>

using namespace std;

int main()
{
    
    double grade = 0;

    cout << "Enter Grade (0-100): ";
    cin >> grade;

    string note = ", Congratulations!";
    string result = (grade >= 50) ? "Pass" + note: "Fail";
    cout << "Result: " << result << endl;;

    return 0;
}