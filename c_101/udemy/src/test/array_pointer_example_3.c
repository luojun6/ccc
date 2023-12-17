#include <stdio.h>

void copyString(char *to, char *from)
{
    while (*from)   // The null character is equal to the value 0, 
        *to++ = *from++                // so we jump out then
}


int main(void)
{


    return 0;
}