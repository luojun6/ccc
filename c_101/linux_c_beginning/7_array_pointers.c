#include <stdio.h>

int main(int argc, char* argv[])
{

    // An array of 10 integers
    int arr[10];

    // An array of 10 pointers to integers
    int *arr_ptr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        arr_ptr[i] = &arr[i];
    }

    printf("Here is the array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d]: %d \n", i, arr[i]);
    }

    printf("\n");

    printf("Here is the array pointers: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("arr_ptr[%d] address: %p, value: %d \n", 
        i, arr_ptr[i], *arr_ptr[i]);
    }



    return 0;
}