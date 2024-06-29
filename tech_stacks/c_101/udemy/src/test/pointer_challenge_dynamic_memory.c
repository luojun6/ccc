/*************************************************************
* Understanding of dynamic memory allocation
*
* Allows user to input a text string
* Print the text the was inputted
* Utilize dynamic memory allocation
*
* The user can enter the limit of the string they are entering
* - You can use this limit when invoking malloc
*
* Should create a char point only, no character arrays
*
* Be sure to release the memory that was allocated 
*
*************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    char *text = NULL;

    printf("Enter limit of the text: ");
    scanf("%d", &size);

    text = (char *) malloc(size * sizeof(char));
    if (text != NULL)
    {
        printf("Enter some text: \n");
        scanf("%s", text);

        printf("Inputted text is: %s\n", text);
    }

    free(text);

    return 0;
}