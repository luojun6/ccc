#include <stdio.h>

#define ARRAY_SIZE 4

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int arr[ARRAY_SIZE] = {0};

    printf("The address of arr: %p\n", arr);
    printArray(arr, ARRAY_SIZE);
    printf("Updated the array: \n");
    arr[1] = 40;
    printArray(arr, ARRAY_SIZE);
    return 0;
}