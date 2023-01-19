#include <stdio.h>


int main(int argc, char *argv[]) 
{  
    int a, b, sum;
    
    a = 4;
    a++; 
    printf("a = %d\n", a);

    a = 2;
    a += 4;
    printf("a = %d\n", a);

    a = 7;
    a--;
    printf("a = %d\n", a);

    a = 7;
    a -= 3;
    printf("a = %d\n", a);

    a = 7;
    a *= 3;
    printf("a = %d\n", a);

    a = 7;
    a /= 3;
    printf("a = %d\n", a);

    a = 7;
    printf("a = %d\n", a--);
    a = 7;
    printf("a = %d\n", --a);

    return 0;
}