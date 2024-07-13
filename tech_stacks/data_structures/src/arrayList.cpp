#include <iostream>
#include <stdexcept>

class IntArrayList
{
private:
    int *_items;
    int _length;
    int _count;             // Added for insert()
public:
    IntArrayList(int length)
    {
        this->_length = length;
        this->_items = new int[length];
        this->_count = 0;
    }
    ~IntArrayList()
    {
        delete this->_items;
    }

    void printAll()
    {
        for(int i = 0; i < this->_length; i++)
            std::cout << this->_items[i] << " ";
        std::cout << std::endl;
    }

    void print()
    {
        for(int i = 0; i < this->_count; i++)
            std::cout << this->_items[i] << " ";
        std::cout << std::endl;
    }

    void insert(int item)
    {   
        // Create a new array (twice the size)
        if (this->_length == this->_count)
        {   
            int newLength = 2 * this->_length;
            this->_length = newLength;

            int *newItems = new int[newLength];

            for (int i = 0; i < this->_count; i++)
                newItems[i] = this->_items[i];

            delete this->_items;
            this->_items = newItems;
        }

        this->_items[this->_count++] = item;
    }

    void removeAt(int index)
    {
        // Validate the index
        if (index < 0 || index > this->_count)
            throw std::runtime_error("Invalid index");

        // Shift the items to the left to fill the hole
        // [10, 20, 30, 40] -> [10, 30, 40]
        for (int i = index; i < this->_count; i++)
            this->_items[i] = this->_items[i+1];

        this->_items[this->_count--] = 0;
    }

    int indexOf(int item)
    {
        // If we find it, return index
        // Otherwise, return -1

        for (int i = 0; i < this->_count; i++)
            if (this->_items[i] == item)
                return i;
        return -1;
    }

};

void testRemoveAt(IntArrayList &intList, int * indexList, const int count);
void testIndexOf(IntArrayList &intList, int * itemList, const int count);

int main()
{
    IntArrayList intList = IntArrayList(4);
    int testRemoveAtList[4] = {-1, 8, 1, 4};
    int testIndexOfList[4] = {-8, 1, 4, 8};

    intList.insert(0);
    intList.insert(1);
    intList.insert(2);
    intList.insert(3);
    intList.insert(4);

    testIndexOf(intList, testIndexOfList, 4);
    testRemoveAt(intList, testRemoveAtList, 4);

    intList.printAll();
    intList.print();

    return 0;
}

void testRemoveAt(IntArrayList &intList, int * indexList, const int count)
{   
    for (int i = 0; i < count; i++)
    {
        std::cout << "Try to remove index " << indexList[i] << std::endl;
        try {
            intList.removeAt(indexList[i]);
            std::cout << "Successfully removed" << std::endl;
        } catch (const std::exception& e){
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
}

void testIndexOf(IntArrayList &intList, int * itemList, const int count)
{
    for (int i = 0; i < count; i++)
        if (intList.indexOf(itemList[i]) != -1)
            std::cout << "Index of " << itemList[i] << " is " << i << std::endl;
        else
            std::cout << itemList[i] << " is not in the array" << std::endl;
    
}