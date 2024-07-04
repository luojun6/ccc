#include <iostream>

class IntArrayList
{
private:
    int *_items;
    int _length;
public:
    IntArrayList(int length)
    {
        this->_length = length;
        this->_items = new int[length];
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

};

int main()
{
    IntArrayList intList = IntArrayList(4);
    intList.print();

    return 0;
}