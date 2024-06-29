#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int guessNumber;

    time_t t;
    srand((unsigned) time(&t)); 
    int randomNumber = rand() % 21;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    // int i = 5;

    for (int i = 5; i >= 0; --i)
    {
        printf("You have %d i left.\n", i);
        printf("Enter a guess: ");
        scanf("%i", &guessNumber);

        if (i == 0)
        {
            printf("Sorry you failed. My number is %d.\n", randomNumber);
            break;
        }

        if (guessNumber == randomNumber)
        {
            printf("Congratuations. You guessed it!");
            break;
        }

        if (guessNumber > randomNumber)
        {
            printf("Sorry, %d is wrong. My number is less than that.\n", guessNumber);
            continue;
        }

        if (guessNumber < randomNumber)
        {
            printf("Sorry, %d is wrong. My number is more than that.\n", guessNumber);
            continue;
        }
        
    }
    
    return 0;
}