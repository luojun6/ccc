#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  
    // make two process which run same
    // program after this instruction
    fork();
  
    printf("Hello world!\n");
    return 0;
}

// Output:
// Hello world!
// Hello world!