#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double n = 42.123456;

    // Ouput 5 digits 
    cout << "5: " << setprecision(5) << n << endl;

    cout << "4: " << setprecision(4) << n << endl;
    cout << "3: " << setprecision(3) << n << endl;
    cout << "2: " << setprecision(2) << n << endl;
    cout << "1: " << setprecision(1) << n << endl;

    cout << endl;
    cout << "5: " << fixed << setprecision(5) << n << endl;
    cout << "4: " << fixed << setprecision(4) << n << endl;
    cout << "3: " << fixed << setprecision(3) << n << endl;
    cout << "2: " << fixed << setprecision(2) << n << endl;
    cout << "1: " << fixed << setprecision(1) << n << endl;

    cout << endl;
    cout << "5: " << scientific << setprecision(5) << n << endl;
    cout << "4: " << scientific << setprecision(4) << n << endl;
    cout << "3: " << scientific << setprecision(3) << n << endl;
    cout << "2: " << scientific << setprecision(2) << n << endl;
    cout << "1: " << scientific << setprecision(1) << n << endl;

    double n1 = 34.2;
    double n2 = 23.345;

    cout << "n1: " << fixed << setprecision(3) << n1 << endl;
    cout << "n2: " << fixed << setprecision(3) << n2 << endl;

    return 0;
}