#include <iostream>

using namespace std;

class Base
{
public:
    // virtual void func() = 0;
    virtual void func()
    {
        cout << "Base func()" << endl;
    }  

    virtual ~Base() = 0;
    // {
    //     cout << "Base destructor" << endl;
    // }  

};

Base::~Base()
{
    cout << "Base destructor" << endl;
}

class Derived1 : public Base
{
public:
    // void func()
    // {
    //     cout << "Derived1 overriding func()" << endl;
    // }    

    // ~Derived1()
    // {
    //     cout << "Derived1 destructor" << endl;
    // }

};

class Derived2 : public Base
{
public:
    void func()
    {
        cout << "Derived2 overriding func()" << endl;
    }    

    // ~Derived2()
    // {
    //     cout << "Derived2 destructor" << endl;
    // }

};

int main()
{

    Base *array[] = 
    {
        // new Base(),
        new Derived1(),
        new Derived1(),
        new Derived2()
    };

    for (int i = 0; i < 3; i++)
        array[i]->func();

    for (int i = 0; i < 3; i++)
        delete array[i];

    return 0;
}