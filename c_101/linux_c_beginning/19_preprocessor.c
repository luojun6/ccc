#include <stdio.h>

#define NUM1 5
#define NUM2 8

#define SUM(x, y) x+y
#define ADD

int main(int argc, char *argv[]) 
{   

    int i;
    int k;
    int sum;

    i = NUM1;
    k = NUM2;

    sum = SUM(i, k);

    /* This is my comment */

#ifdef ADD
    sum = i + k;
#else
    sum = SUM(i, k);
#endif

    return 0;
}

// gcc -E -c xxx.c 