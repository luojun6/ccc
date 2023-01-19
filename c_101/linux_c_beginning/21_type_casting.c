#include <stdio.h>


int main(int argc, char *argv[]) 
{  
    int i;
    char c;

    char *ptr;
    char s;

    c = 'w';
    i = (int) c;
    printf("i = %d, %c\n", i, i);

    s = 'x';
    ptr = &s;
    i = (int) ptr;
    printf("i = %x\n", i);
    
    i = 3000;
    c = (char) i;
    printf("c = %d\n", c);

    return 0;
}