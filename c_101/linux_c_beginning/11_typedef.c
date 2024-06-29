#include <stdio.h>

typedef int INT32;
typedef char MYCHR;

typedef struct mystruct_t
{
    int a;
    int b;
} MYSTRUCTX;


int main(int argc, char *argv[]) 
{   

    INT32 i;
    MYCHR mystr[20] = "Hello World!";

    MYSTRUCTX my_struct;
    my_struct.a = 2;
    my_struct.b = 4;

    printf("i = %d\n", i);
    printf("mystr = %s\n", mystr);

    printf("my_struct.a = %d\n", my_struct.a);
    printf("my_struct.b = %d\n", my_struct.b);

    return 0;
}