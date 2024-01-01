/*************************************************************
* Understanding of pointer arithmetic and the const modifier
*
* Write a function that calcluates the length of a string
*   - Take as a parameter a const char pointer
*   - Can only determine the length of the string using
*     pointer arithmetic
*       - Incrementation operator (++pointer) to get the 
*         the end of the string
*
* Use a while loop using the value of the pointer to exit
*
* Should substract two pointers 
*   - One pointing to the end of the string
*   - One pointing to the beginning of the string
* 
* Return an int that is the length of the string passed in
*************************************************************/

#include <stdio.h>

int len_char(const char * str);

int main()
{

    char *str = "JunLuo";

    printf("Length of %s: %d\n", str, len_char(str));

    return 0;
}

int len_char(const char * str)
{
    const char *start = str;
    const char *end = str;
    int len = 0;

    while(*end != '\0')
    {
        end++;
    }

    len = end - start + 1;

    return len;
}