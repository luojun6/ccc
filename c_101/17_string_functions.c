#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{   
    char str[24];
    char str2[24];
    int i;
    int n;

    sprintf(str, "Hello World!");
    printf("%s\n", str);

    i = 4;
    sprintf(str, "Value of i = %d", i);
    printf("%s\n", str);

    n = strlen(str);
    printf("Length of str is %d\n", n);

    strcpy(str2, str);
    printf("str2 is %s\n", str2);

    memset(str, 0, 24);
    printf("New str is %s\n", str);

    memset(str, 'a', 10);
    printf("New str is %s\n", str);

    return 0;
}