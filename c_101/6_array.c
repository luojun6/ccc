#include <stdio.h>

int main(int argc, char *argv[]) 
{   
    int a[4];

    a[0]  = 3;
    a[1] = 2;
    a[2] = 7;
    a[3] = 10;

    int length;
    length = sizeof(a) / sizeof(int);


    for(int i=0; i<length; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}