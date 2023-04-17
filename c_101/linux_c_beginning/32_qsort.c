/*
void qsort(void *base, 
           size_t nitems, 
           size_t size, 
           int (*compar)(const void *, const void*))

base − This is the pointer to the first element of the array to be sorted.
nitems − This is the number of elements in the array pointed by base.
size − This is the size in bytes of each element in the array.
compar − This is the function that compares two elements.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int cmpstringp(const void *p1, const void *p2)
{
    return strcmp(*(char *const *)p1, *(char *const *)p2);
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <string>...\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    qsort(&argv[1], argc - 1, sizeof(char *), cmpstringp);

    for (int j = 1; j < argc; j++)
        puts(argv[j]);

    exit(EXIT_SUCCESS);
}