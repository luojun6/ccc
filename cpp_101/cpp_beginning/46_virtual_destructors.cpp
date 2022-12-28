#include <iostream>

using namespace std;

class BaseData
{
public:
    int *data;

    BaseData(int size)
    {
        data = new int[size];
    }

    virtual ~BaseData()
    {
        
        cout << "BaseData destructor is running." << endl;
        delete data;
    }

};

class DerivedData : public BaseData
{
public:
    int *extra_data;

    DerivedData(int size, int extra_size): BaseData(size)
    {
        extra_data = new int[extra_size];
    }

    ~DerivedData()
    {
        cout << "DerivedData destructor is running." << endl;
        delete extra_data;
    }

};


int main()
{

    // BaseData *base = new BaseData(10);
    // delete base;

    // DerivedData *derived = new DerivedData(10, 10);
    // delete derived;

    BaseData *array[] = {
        new BaseData(7),
        new DerivedData(4, 4)
    };

    // do some work
    // for (int i = 0; i < 2; i++) array[i].methdo();

    for (int i = 0; i < 2; i++) delete array[i];

    return 0;
}