#include <stdio.h>

int main(void)
{
    long multiple[] = {15L, 25L, 35L, 45L};
    long *p = multiple;

    for (int i = 0; i < sizeof(multiple)/sizeof(multiple[0]); ++i)
        printf("Address p+%d (&multiple[%d]): %llu   *(p+%d) value: %ld\n", 
        i, i, (unsigned long long)(p+i), i, *(p+i));

    printf("\b Type long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}