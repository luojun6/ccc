#include <iostream>
#include <cstdlib>
#include <ctime>

#define maxValue 6
#define minValue 0

int main()
{
    srand(time(nullptr));
    int dice = (rand() % (maxValue - minValue + 1)) + minValue;
    std::cout << "Rolling dice result: " << dice << std::endl;
}