#include <iostream>

using namespace std;

int find(int *numbers, int size, int target);

int main() {

    int numbers[] = { 10, 20, 30 };

    int index = find(numbers, 3, 20);

    cout << index << endl;

    return 0;
}

int find(int *numbers, int size, int target) {

    for (size_t i = 0; i < size; i++) {
        if (numbers[i] == target)
            return i;
    }

    return -1;
}