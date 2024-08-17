#include <iostream>

using namespace std;

void swap(int *numbers, int i, int j);
void sort(int *numbers, int size);

int main() {

    int numbers[] = { 8, 2, 4, 1, 3 };
    int size = sizeof(numbers) / sizeof(int);
    sort(numbers, size);

    for (int i = 0; i < size; i++) 
        cout << numbers[i] << endl;

    return 0; 
}

void swap(int *numbers, int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int *numbers, int size) {
    for (int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size; i++) {
            if (numbers[i] < numbers[i - 1])
                swap(numbers, i, i-1);
        }
    }
}