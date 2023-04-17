#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int print_num(int num)
{
    printf(" %d ", num);
    return num;
}

int main()
{
    print_num(0) && print_num(0) || print_num(0);
    printf("\n");
    print_num(1) && print_num(0) || print_num(0);
    printf("\n");
    print_num(0) && print_num(1) || print_num(0);
    printf("\n");
    print_num(0) && print_num(0) || print_num(1);
    printf("\n");
    print_num(1) && print_num(1) || print_num(0);
    printf("\n");
    print_num(0) && print_num(1) || print_num(1);
    printf("\n");
    print_num(1) && print_num(0) || print_num(1);
    printf("\n");
    print_num(1) && print_num(1) || print_num(1);
    printf("\n");
    return 0;
}