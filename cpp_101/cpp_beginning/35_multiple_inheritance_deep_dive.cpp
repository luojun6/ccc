#include <iostream>

using namespace std;

class CommonBaseClass
{
public:
    int common_value;

    CommonBaseClass() : common_value(-99) {}
    CommonBaseClass(int common_value) : common_value(common_value) {}

};

class BaseClass1 : virtual public CommonBaseClass
{
public:
    int value;

    BaseClass1() : CommonBaseClass(100) {}

    void function1()
    {
        cout << "Function1 BaseClass1" << endl;
    }

};

class BaseClass2 : virtual public CommonBaseClass
{
public:
    int value;

    BaseClass2() : CommonBaseClass(200) {}

    void function1()
    {
        cout << "Function1 BaseClass2" << endl;
    }

    void function2()
    {
        cout << "Function2 BaseClass2" << endl;
    }

};

class DerivedClass: public BaseClass1, public BaseClass2
{
public:

    void function1()
    {
        // cout << "Function1 DerivedClass" << endl;
        BaseClass1::function1();
    }

    void function3()
    {
        cout << "Function3 DerivedClass" << endl;
    }

    // DerivedClass() : CommonBaseClass(999) {};

};

int main()
{
    DerivedClass derived;
    // derived.common_value = 10;
    cout << "Common value: " << derived.common_value << endl;
    derived.BaseClass2::value = 20;
    // derived.BaseClass1::function1();
    derived.function1();
    derived.function2();
    derived.function3();

    return 0;
}