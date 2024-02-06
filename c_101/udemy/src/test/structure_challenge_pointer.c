/************************************************************************************************************************
* Create a structure pointer and passes it to a function 
*   - Create a structure named item with the following members 
*       - itemName - pointer
*       - quantity - int
*       - price - float
*       - amount - float (stores quantity * price)
* 
*   - Create a function named readitem that takes a structure pointer of type item as a parameter
*       - This function should read in (from the user) a product name, price and quantity
*       - The contents read in should be stored in the passed in structure to the function
* 
*   - Create a function named print item that takes as a parameter a structure pointer of type item
*       - Function prints the contents of the parameter
* 
*   - The main function should declare an item and a pointer to the item
*       - You will need to allocate memory for the itemName pointer
*       - The item pointer should be passed into both the read and print item funcitons
* 
*************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readitem(struct item *item, char *itemName, int quantity, float price)
{
    item->itemName = itemName;
    item->quantity = quantity;
    item->price = price;
    item->amount = price * quantity;
}

void printitem(struct item const *item)
{
    printf("\nitemName: %s, ", item->itemName);
    printf("quantity: %d, ", item->quantity);
    printf("price: %.2f, ", item->price);
    printf("amount: %.2f\n", item->amount);
}

int main(int argc, char **argv)
{
    struct item *it = malloc(sizeof(struct item));
    readitem(it, "kit", 6, 9.9);
    printitem(it);

    return 0;
}

