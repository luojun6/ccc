#include <iostream>

int main() {
    int number = 255;
    std::cout << number << std::endl;

    int b_number = 0b11111111;
    std::cout << b_number << std::endl;

    int h_number = 0xff;
    std::cout << h_number << std::endl;

    unsigned int u_number = 0;
    std::cout << "Stay away with the unsigned keywork: unsigned 0 - 1 = "; 
    std::cout << u_number - 1 << std::endl;

    return 0;
}