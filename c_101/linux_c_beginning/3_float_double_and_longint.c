#include <stdio.h>

int main(int argc, char *argv[]) 
{   

    int my_int;
    char my_char;
    float my_num;

    long int my_long_int;
    double my_double, my_sum_db;

    my_num = 24.3;
    printf("24.3 - my_num = %f\n", my_num);

    my_num = 24.4;
    printf("24.4 - my_num = %f\n", my_num);

    printf("Size of int = %d\n", sizeof(int));
    printf("Size of my_int = %d\n", sizeof(my_int));

    printf("Size of char = %d\n", sizeof(char));
    printf("Size of my_char = %d\n", sizeof(my_char));

    printf("Size of float = %d\n", sizeof(float));
    printf("Size of my_num = %d\n", sizeof(my_num));

    printf("Size of long int  = %d\n", sizeof(long int ));
    printf("Size of my_long_int int  = %d\n", sizeof(my_long_int));

    printf("Size of double = %d\n", sizeof(double));
    printf("Size of my_double = %d\n", sizeof(my_double));

    my_double = 243.25;
    my_sum_db = 3.5 + my_double;
    printf("Value of my_sum_db = %f\n", my_sum_db);

    my_int = 3;
    my_sum_db = 3.2 + my_int;
    printf("Value of my_sum_db = %f\n", my_sum_db);

    my_sum_db = 22.4 + 4.0;
    printf("Value of my_sum_db = %f\n", my_sum_db);

    return 0;
}