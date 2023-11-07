#include <stdio.h>
#include <string.h>

int main()
{

    char myName[] = "My Name is JunLuo";

    char temp[50];

    strncpy(temp, myName, (sizeof(temp) - 1));

    printf("The length of myName is: %ld\n", strlen(myName));
    printf("The string of temp is: %s\n", temp);
    

    char myString[] = "my string";
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is::::\n", myString, input);
    printf("%s\n", strcat(input, myString));

    return 0;
}