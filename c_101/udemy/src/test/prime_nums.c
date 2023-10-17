#include <stdio.h>

int main(int argc, char **arg)
{

    int range = 100000;
    int nums[range];
    int primes[range];
    primes[0] = 2;
    primes[1] = 3;
    int primed_index = 2;
    int key = 0;

    for (int i = primes[1] + 1; i < range; i++)
    {

        for (int j = 0; j < primed_index; j++)
        {
            if ( i % primes[j] == 0)
                break;
            else
                ++key;
        }
        // printf("i: %d, key: %d, primed_index: %d\n", i, key, primed_index);
        if (key == primed_index)
        {
            primes[primed_index] = i;
            ++primed_index;
        }

        key = 0;

    }

    for (int i = 0; i < primed_index; i++)
    {
        printf("%d ", primes[i]);
    }
    printf("\n");

    return 0;
}