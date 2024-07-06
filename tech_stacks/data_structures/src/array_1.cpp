#include <iostream>

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

    void print()
    {
        for(int i = 0; i < this->_length; i++)
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

};

int main()
{
    IntArrayList intList = IntArrayList(4);
    intList.insert(0);
    intList.insert(1);
    intList.insert(2);
    intList.insert(3);
    intList.insert(4);
    intList.print();

    return 0;
}