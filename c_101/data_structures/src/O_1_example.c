#include <stdio.h>

void log(int *numbers)
{
    printf("%d\n", numbers[0]);
}

int main()
{
    int numbers[4] = {};
    
    log(numbers); // O)1

    return 0;
}