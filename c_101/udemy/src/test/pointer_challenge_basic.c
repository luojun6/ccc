/***********************************************************
* To create, intialize, assign and access a pointer
*
* Write a program that creates an integer variable with 
* hard-coded value. Assign that variable's address to
* a pointer variable
*
* Display as output the addres of the pointer, the value 
* of the pointer, and the value of what the pointer is 
* pointing
************************************************************/

#include <stdio.h>

int main()
{
    int number = 666;
    int *pNumber = NULL;

    pNumber = &number;

    printf("Number = %d, *pNumber = %d, pNunber = %p\n", number, *pNumber, pNumber);

    return 0;
}