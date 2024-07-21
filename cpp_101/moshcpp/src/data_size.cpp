#include <iostream>
#include <limits>

int main() {
    std::cout << "Bytes of int: " << sizeof(int) << std::endl;
    std::cout << "std::numeric_limits<int>::min(): " 
              << std::numeric_limits<int>::min() << std::endl
              << "std::numeric_limits<int>::max(): " 
              << std::numeric_limits<int>::max() << std::endl
              << "std::numeric_limits<int>::max() + 1: " 
              << std::numeric_limits<int>::max() + 1<< std::endl
              << "std::numeric_limits<int>::min() - 1: " 
              << std::numeric_limits<int>::min() - 1 << std::endl
              << "std::numeric_limits<long long>::min(): " 
              << std::numeric_limits<long long>::min() << std::endl
              << "std::numeric_limits<long long>::max(): " 
              << std::numeric_limits<long long>::max() << std::endl;
    return 0;
}