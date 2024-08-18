#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int y = 20;

    int* ptrX = &x;
    int* ptrY = &y;
    int *ptrXX = &x;

    if (ptrX == ptrY)
        cout << "ptrX == ptrY: " << "Same" << endl;
    else
        cout << "ptrX == ptrY: " << "Different" << endl;

    if (ptrX == ptrXX)
        cout << "ptrX == ptrXX: " << "Same" << endl;
    else
        cout << "ptrX == ptrXX: " << "Different" << endl;

    return 0;
}