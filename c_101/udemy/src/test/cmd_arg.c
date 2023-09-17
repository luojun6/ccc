#include <stdio.h>

int main(int argc, char **argv)
{

    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Arguments 1 is the program name: %s\n", argument1);
    printf("Arguments 2 is the command-line arguent: %s\n", argument2);

    return 0;
}