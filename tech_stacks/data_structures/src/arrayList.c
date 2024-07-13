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

void printIntArray(IntArrayList *intArrayList)
{
    for (int i = 0; i < intArrayList->count; i++)
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
    const int count = intArrayList->count;
    // Validate the index
    if (index < 0 || index >= count)
    {
        printf("\nError: Index %d is invalid, it must be >= 0 and < count %d\n", index, intArrayList->count);
        return; 
    }
    // Shift the items to the left to fill the hole
    // [10, 20, 30, 40] -> [10, 30, 40]
    for (int i = index; i < (count - 1); i++)
        intArrayList->items[i] = intArrayList->items[i+1];

    intArrayList->items[count-1] = 0;
    intArrayList->count = count - 1;
}

int indexOf(IntArrayList *intArrayList, int item)
{
    // If we find it, return index
    // Otherwise, return -1

    for (int i = 0; i < intArrayList->count; i++)
    {
        if (intArrayList->items[i] == item)
            return i;
    }

    return -1;
}

void testIndexOf(IntArrayList *intList, int * itemList, const int count)
{
    
    for (int i = 0; i < count; i++)
    {
        if(indexOf(intList, itemList[i]) != -1)
            printf("The index of %d is %d\n", itemList[i], i);
        else
            printf("Item %d is not in the array\n", itemList[i]);
    }
}

void testRemoveAt(IntArrayList *intList, int * indexList, const int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Try to remove at index %d.", indexList[i]);
        removeAt(intList, indexList[i]);
    }

}

int main()
{
    IntArrayList *intList = createIntArrayList(4);
    int indexList[4] = {-1, 8, 1, 2};
    int itemList[4] = {-8, 1, 8, 4};

    insert(intList, 0);
    insert(intList, 1);
    insert(intList, 2);
    insert(intList, 3);
    insert(intList, 4);
    printf("Constructing the array: ");
    printIntArrayAll(intList);

    testIndexOf(intList, itemList, 4);
    testRemoveAt(intList, indexList, 4);

    printf("\n");
    printIntArrayAll(intList);
    printIntArray(intList);
    destroyIntArrayList(intList);

    return 0;
}