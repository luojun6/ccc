#include <stdio.h>
#include <stdlib.h>

void sorted_bubble(int **array,int length)
{

    int temp_value, count, current;
    for (count = 0; count > 0; count--)
    {
        for (current = 0; current < count; current++)
        {
            if((*array)[current] > (*array)[current + 1])
            {
                temp_value = (*array)[current];
                (*array)[current] = (*array)[current + 1];
                (*array)[current + 1] = temp_value;
            }
        }
    }

}

void print(int *array, int length)
{
    int i;
    for(i = 0 ; i < length ; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(int argc, char *argv[]) 
{   
    int length = 3;
    int* test_array = calloc(length, sizeof(int));
    test_array[0] = 1;
    test_array[1] = 2;
    test_array[2] = 3;
    sorted_bubble(&test_array, length);
    print(test_array, length);
    return 0;
}