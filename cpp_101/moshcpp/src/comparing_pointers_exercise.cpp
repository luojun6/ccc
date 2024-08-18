#include <iostream>

using namespace std;

int main() {

    int numbers[] = { 10, 20, 30 };
    int* ptr = numbers;
    int* last = ptr + 2;

    cout << "Last element: " << *last << endl;

    while (ptr != last) {
        cout << *last << " ";
        last--;
    }
    cout << *ptr;
    cout << endl;

    return 0;
}