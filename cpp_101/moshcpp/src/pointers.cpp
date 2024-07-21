#include <iostream>

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {

    int a = 40;
    int *ptr_a = &a;
    int b = 80;
    int *ptr_b = &b;

    std::cout << "a = " << a << ", b = " << b <<std::endl; 

    swap(ptr_a, ptr_b);
    std::cout << "a = " << a << ", b = " << b <<std::endl; 

    return 0;
}