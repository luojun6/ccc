#include <stdio.h>

float getAbs(float n)
{
    if (n < 0)
        n = (-1) * n;
    
    return n;
}

float squareRoot(float x)
{
    const float epsilon = 0.000001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (x < 0)
    {
        printf("Negative argument of squareRoot.\n");
        returnValue = -1.0;
    }

    if (returnValue != -1.0)
    {
        while (getAbs(guess * guess - x) >= epsilon)
        {
            printf("Current guess value: %f\n", guess);
            guess = (x / guess + guess) / 2.0;
        }
        returnValue = guess;
    }
    
    return returnValue;
} 


int main(void)
{
    printf("Square root of 12: %f\n", squareRoot(12));
    return 0;
}