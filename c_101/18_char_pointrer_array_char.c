#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{   
    char str[24] = "First string";
    char *ptr = "Second string";

    printf("str = %s\n", str);
    printf("ptr = %s\n", ptr);

    printf("&ptr = %p\n", &ptr);
    printf("The pointed array address: *(&ptr) = %p\n", *(&ptr));
    printf("ptr moving forward 1 step.\n");
    ptr = ptr + 1;  // We can't manipulate str[24] address directly
    printf("ptr = %s\n", ptr);
    printf("&ptr = %p\n", &ptr);
    printf("The pointed array address: *(&ptr) = %p\n", *(&ptr));
    printf("ptr moving forward 1 one more step.\n");
    ptr = ptr + 1; 
    printf("ptr = %s\n", ptr);
    printf("&ptr = %p\n", &ptr);
    printf("The pointed array address: *(&ptr) = %p\n", *(&ptr));

    printf("Length of ptr is %ld\n", strlen(ptr));
    strcpy(str, ptr);
    printf("New str is %s\n", str);

    ptr = ptr - 2;
    printf("Recoved ptr: %s\n", ptr);

    memset(&ptr, 0, strlen(ptr));
    printf("Reset ptr: %s\n", ptr);

    return 0;
}

// The 'S' missing will becomde the garbage!!!

// str -> 0x08ffff -> 'F'
//     -> 0x090000 -> 'i'
//     ......
//     -> 0x09000B -> 'g'
//     -> 0x09000C -> unkonwn char

// ptr -> 0x0cffef -> 0x0d0001
    
//     -> 0x0d0001 -> 'S'
//     -> 0x0d0002 -> 'e'
//     ......
//     -> 0x0d000E -> 'g'