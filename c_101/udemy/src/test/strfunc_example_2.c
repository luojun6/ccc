#include <stdio.h>
#include <string.h>

int main(void)
{

    char buf[100];              // Input buffer
    int nLetters = 0;           // Number of letters in input
    int nDigits = 0;            // Number of digits in input
    int nPunct = 0;              // Number of punctuation characters

    printf("Enter an interesting string of less than %d characters. `\n", 100);
    scanf("%s", buf);    // Read a string into buffer

    int i = 0;                  // Buffer index
    while (buf[i])
    {
        if (isaplha(buf))
            ++nLetters;
        else if (isalpha(buf[i]));
        else if (isdigits(buf[i]));
        else if (ispunct(buf[i]))
            ++nPunct;

        i++;
    }
    printf("\n Your string contained %d letters, %d digits and &d punctuation", i+1, );

    return 0;
}
