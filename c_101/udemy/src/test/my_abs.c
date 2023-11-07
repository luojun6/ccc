#include <stdio.h>

float getAbs(float n)
{
    if (n < 0)
        n = (-1) * n;
    
    return n;
}

int main(void)
{
    float a = 3.14f;
    int b = 3;

    printf("Test float: %f\n", getAbs(a));
    printf("Test int: %f\n", getAbs(b));
    
    return 0;
}