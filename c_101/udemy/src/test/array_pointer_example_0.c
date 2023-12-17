#include <stdio.h>

// int arraySum(int array[], const int n)
int arraySum(int *array, const int n)
{
    int sum = 0;
    int * const arrayEnd = array + n;

    for ( ; array < arrayEnd; ++array)
        sum += *array;

    return sum;
}

void main(void)
{
    // int arraySum(int array[], const int n);
    int values[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("The sume is %i\n", arraySum(values, 10));
}

