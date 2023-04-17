#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkexample()
{
    int a = 5;
    if (fork() == 0) {
        a = a + 5;
        printf("%d, %p\n", a, &a);
    }
    else {
        a = a - 5;
        printf("%d, %p\n", a, &a);
}

}
int main()
{
    forkexample();
    return 0;
}

// The physical addresses of ‘a’ in parent and child must be different. 
// But our program accesses virtual addresses (assuming we are running on an OS that uses virtual memory).
// The child process gets an exact copy of parent process and virtual address of ‘a’ doesn’t change in child process. 
// Therefore, we get same addresses in both parent and child.
// But in python3 v and y will not be equal.