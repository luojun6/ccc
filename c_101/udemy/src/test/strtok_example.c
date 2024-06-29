#include <stdio.h>
#include <string.h>

int main()
{
    char str[80] = "Hello how are you - my name is - JunLuo";
    const char s[2] = "-";
    char *token;

    /* Get the first token */
    token = strtok(str, s);

    /* Walk through other tokens */
    while (token != NULL)
    {
        printf(" %s\n", token);
        // The first call to strtok must pass the C string to tokenize, 
        // and subsequent calls must specify NULL as the first argument, 
        // which tells the function to continue tokenizing the string you passed in first.
        token = strtok(NULL, s);
    }
    
    return 0;
}