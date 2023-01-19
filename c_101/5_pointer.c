#include <stdio.h>

int main(int argc, char *argv[]) 
{   
    // An integer
    int n;

    // A pointer to an integer
    int *k;

    n = 25;
    k = &n;

    printf("&n = %x\n", &n);
    printf("n = %d\n", n);
    printf("k = %x\n", k);
    printf("*k = %d\n", *k);

    *k = 10;
    printf("n = %d\n", n);
    printf("k = %x\n", k);
    printf("*k = %d\n", *k);
    
    return 0;
}