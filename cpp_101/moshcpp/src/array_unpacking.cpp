#include <iostream>

using namespace std;

int main() {
    int values[] = { 10, 20, 30 };
    auto [x, y, z] = values;

    // int x = values[0];
    // int y = values[1];
    // int c = values[2];

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}