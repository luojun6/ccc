#include <iostream>

using namespace std;

int main() {

    int numbers[] = { 10, 20, 30 };
    int* ptr = numbers;

    ptr++; // Increament by the size of element

    cout << *ptr << endl; // 20
    cout << *(ptr + 1) << endl; // 30

}