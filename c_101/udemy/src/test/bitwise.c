#include <stdio.h>

int main()
{
    unsigned int a = 60;    // 0011 1100
    unsigned int b = 13;    // 0000 1101
    int result = 0;

    printf("a & b = %d\n", (a & b));
    printf("a | b = %d\n", (a | b));
    printf("a ^ b = %d\n", (a ^ b));
    printf("~a = %d\n",  (~a));
    printf("a<<2 = %d\n",  (a<<2));
    printf("a>>2 = %d\n",  (a>>2));

    return 0;
}