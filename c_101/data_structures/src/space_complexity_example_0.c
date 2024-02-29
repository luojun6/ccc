#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void greet(char **names, int size)
{
    char **new_names = (char*)malloc(size * sizeof(char*));
    
    for (int i = 0; i < size; i++)
    {
        printf("Hi, %s.\n", names[i]);
    }
}


int main()
{   
    char *names[4] = {"JunLuo", "CherylTan", "RoyLuo", "YummyLuo"};
    greet(names, 4);
    return 0;
}