#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;
    
    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if(cin.fail()) break;
        entries++;
        if (entries == capacity) 
        {
            // Create a temp array (twice the size)
            capacity *= 2;
            int* newNumbers = new int[capacity];
            // Copy all the elements
            for (int i = 0; i < capacity; i++)
            {
                newNumbers[i] = numbers[i];
               
            }
            // Have "number" pointer point to the new array
            delete[] numbers;
            numbers = newNumbers;
        }
    }
    
    for (int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    delete[] numbers;

    return 0;
}