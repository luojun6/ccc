#include <stdio.h>

int increment(int a)
{
    return ++a;
}

int decrement(int a)
{
    return --a;
}

int main(int argc, char* argv[])
{
    // A pointer to a function that takes an integer 
    // as an argument and returns an integer
    int (*a)(int a);
    a = increment;

    int result = a(4);
    printf("Result of increment of 4: %d\n\n", result);

    // An array of ten pointers to functions 
    // that take an integer argument and return an integer
    int (*arr[10])(int) = { 0 };
    arr[0] = increment;
    arr[1] = decrement;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != NULL)
        {
            result = arr[i](4);
            printf("Result of arr[%d]: %d\n", i, result);
        }
        else
        {
            printf("Pointer arr[%d] is NULL.\n", i);
        }
    }

        return 0;
}