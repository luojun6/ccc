#include <iostream>
#include <iomanip>

int main() {
    
    std::cout << "Formating the data into columns here: " << std::endl;
    std::cout << std::left;
    std::cout << std::setw(8) << "Spring" << std::setw(8) << "Nice" << std::endl;
    std::cout << std::setw(8) << "Summer" << std::setw(8) << "Hot" << std::endl << std::endl;
    
    std::cout << "Formating the float data here: " << std::endl;
    std::cout << std::fixed << std::setprecision(8) << 12.3456 << std::endl
              << 22.3344 << std::endl; 

    return 0;
}