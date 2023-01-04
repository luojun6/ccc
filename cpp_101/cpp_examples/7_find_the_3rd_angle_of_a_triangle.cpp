#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // angle3 = 180 - angle1 - angle2

    double angle1, angle2;

    cout << "Enter angle1: ";
    cin >> angle1;

    cout << "Enter angle2: ";
    cin >> angle2;

    if ((angle1 > 0 && angle1 < 180) && 
        (angle2 > 0 && angle2 < 180) && 
        ((angle1 + angle2) < 180))
        {
            double angle3 = 180 - angle1 - angle2;
            cout << "angle3: " << angle3 << endl;
        }
    else cout << "angle1 and/or angle2 are invalud!" << endl;

    return 0;
}