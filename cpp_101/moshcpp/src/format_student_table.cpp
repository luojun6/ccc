#include <iostream>
#include <iomanip>

#define cppStudentNumber 160
#define javaScriptStudentNumber 80

int main() {

    std::cout << std::left;
    std::cout << std::setw(16) << "Course" << std::setw(16) << "Students" << std::endl;
    std::cout << std::setw(16) << "C++" << std::setw(16) << cppStudentNumber << std::endl;
    std::cout << std::setw(16) << "JavaScript" << std::setw(16)  << javaScriptStudentNumber << std::endl;

    return 0;
}