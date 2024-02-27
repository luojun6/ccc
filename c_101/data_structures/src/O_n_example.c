#include <stdio.h>

void logArray(int *parray, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(parray + i));
    }
}

int main()
{
    int numbers[4] = {0, 1, 2, 3};
    
    logArray(numbers, 4); 

    return 0;
}