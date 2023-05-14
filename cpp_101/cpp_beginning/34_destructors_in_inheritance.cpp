#include <iostream>

using namespace std;

class BaseClass
{
public:
    BaseClass()
    {
        cout << "BaseClass constructor executing." << endl;
    }

    virtual ~BaseClass()
    {
        cout << "BaseClass destructor executing." << endl;
    }

};

class DerivedClass : public BaseClass
{
public:
    
    DerivedClass()
    {
        cout << "DerivedClass constructor executing." << endl;
    }

    ~DerivedClass()
    {
        cout << "DerivedClass destructor executing." << endl;
    }

};

void func()
{
    DerivedClass example;

    cout << endl;
}

int main()
{

    func();

    return 0;
}