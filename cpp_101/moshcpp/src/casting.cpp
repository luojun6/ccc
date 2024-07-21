#include <iostream>

int main()
{
    int x = 1;
    double y = 2.0;
    int z = x + static_cast<int>(y);
    std::cout << z << std::endl; 
    return 0;
}