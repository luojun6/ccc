#include <stdio.h>
#include <math.h>

int gcdBasic(int a, int b)
{
    // Find minimun of a and b
    int result = (a < b) ? a : b;
    
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
            break;
        result--;
    }
    
    return result;
}

int gcdEuclidean(int a, int b)
{
    if (a == 0)
        return a;

    if (b == 0)
        return b;

    if (a == b)
        return a;

    if (a > b)
        return gcdEuclidean(a - b, b);
    return gcdEuclidean(a, b - a);
}

int main() 
{ 
    int a = 98, b = 56; 
    printf("GCD of %d and %d is %d using gcdBasic().\n", a, b, gcdBasic(a, b)); 
    printf("GCD of %d and %d is %d using ETC().\n", a, b, gcdEuclidean(a, b));
    return 0; 
}