/************************************************************
* Understanding of pass by reference
* Write a function squares a nunmber by itself
*   - The funciton should define as a parameter an int pointer
************************************************************/

#include <stdio.h>

void square(int *number)
{
    *number = (*number) * (*number);
}

int main()
{
    int number = 666;

    square(&number);

    printf("The square of the given number is %d\n", number);

    return 0;
}