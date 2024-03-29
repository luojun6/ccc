#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUMS 1000

int main(int argc, char **argv)
{
    
    int p;
    int i;
    bool isPrime;

    int primes[50] = {0};
    int primeIndex = 2;

    // Hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= NUMS; p = p + 2)
    {
        isPrime = true;

        for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0; i < primeIndex; ++i )
        printf("%i ", primes[i]);

    printf("\n");
    return 0;
}