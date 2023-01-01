#include <iostream>
// #include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    int divisor = __gcd(20, 12);

    cout << "divisor: " << divisor << endl;

    return 0;
}

// A divisor is a number that divides another number with 
// no remainder.

// 20 - 20, 10, 5, 4*, 2, 1

// 12 - 12, 6, 4*, 3, 2, 1