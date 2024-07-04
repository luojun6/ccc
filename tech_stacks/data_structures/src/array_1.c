#include <stdio.h>
#include <stdlib.h>

typedef struct IntArrayList IntArrayList;

struct IntArrayList
{
    int *items;
    int length;
};

IntArrayList *createIntArrayList(const int len)
{
    IntArrayList *intArrayList = malloc(sizeof(IntArrayList));
    int *array = malloc(sizeof(int) * len);
    intArrayList->items = array;
    intArrayList->length = len;

    return intArrayList;
}

void printIntArrayAll(IntArrayList *intArrayList)
{
    for (int i = 0; i < intArrayList->length; i++)
        printf("%d ", intArrayList->items[i]);
    printf("\n");
}

int main()
{
    IntArrayList *intList = createIntArrayList(4);
    printIntArrayAll(intList);

    return 0;
}