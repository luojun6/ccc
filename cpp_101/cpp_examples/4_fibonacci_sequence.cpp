#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    int term1 = 0;
    int term2 = 1;
    int n = 0;
    int next_term = 0;

    cout << "Number of terms: ";
    cin >> n;

    if ( n <= 2)
    {
        cout << "Number of terms must be >= 3!" << endl;
        return 1;
    }

    cout << term1 << ", " << term2 << ", ";
    for (int i = 3; i <= n; i++)
    {
        next_term = term1 + term2;
        cout << next_term;
        if (i != n) cout << ", ";
        term1 = term2;
        term2 = next_term;
    }

    return 0;
}