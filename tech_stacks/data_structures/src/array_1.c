#include <stdio.h>
#include <stdlib.h>

typedef struct IntArrayList IntArrayList;

struct IntArrayList
{
    int *items;
    int length;
    int count;                      // Added for insert()
};

IntArrayList *createIntArrayList(const int len)
{
    IntArrayList *intArrayList = malloc(sizeof(IntArrayList));
    int *array = malloc(sizeof(int) * len);
    intArrayList->items = array;
    intArrayList->length = len;
    intArrayList->count = 0;        // Added for insert()

    return intArrayList;
}

void *destroyIntArrayList(IntArrayList *intArrayList)
{
    free(intArrayList->items);
}

void printIntArrayAll(IntArrayList *intArrayList)
{
    for (int i = 0; i < intArrayList->length; i++)
        printf("%d ", intArrayList->items[i]);
    printf("\n");
}


void insert(IntArrayList *intArrayList, int item)
{   
    if (intArrayList->count == intArrayList->length)
    {
        // Create a new array (twice the size)
        int *newArray = malloc(2 * sizeof(int) * intArrayList->count);
        int newLength = 2 * intArrayList->length;
        intArrayList->length = newLength;

        // Copy all the existing items
        for (int i = 0; i < intArrayList->count; i++)
        {
            newArray[i] = intArrayList->items[i];
        }
        free(intArrayList->items);
        intArrayList->items = newArray;

    }

    intArrayList->items[intArrayList->count] = item;
    intArrayList->count++;
}

void removeAt(IntArrayList *intArrayList, int index)
{
    // Validate the index
    if (index < 0)
    {
        printf("Error: Index is not allowed to less than zero.");
        return;
    }
        

    if (index > intArrayList->count)
    {
        printf("Error: Index is not allowed to greater than the count as %d", intArrayList->count);
        return;
    }

    
}

int main()
{
    IntArrayList *intList = createIntArrayList(4);
    insert(intList, 0);
    insert(intList, 1);
    insert(intList, 2);
    insert(intList, 3);
    insert(intList, 4);
    printIntArrayAll(intList);
    destroyIntArrayList(intList);

    return 0;
}