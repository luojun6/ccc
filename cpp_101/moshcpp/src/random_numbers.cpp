#include <iostream>
#include <cstdlib>
#include <ctime> 

int main() {
    long elapsedSeconds = time(nullptr); // Jan 1 1970
    std::cout << "elapsedSeconds: " << elapsedSeconds << std::endl;
    srand(elapsedSeconds);
    int number = rand() % 100;
    std::cout << number << std::endl; 

}