#include <iostream>

using namespace std;

class BaseClass
{
public:
    int _public_member;

private:
    int _private_member;

protected:
    int _protected_member;

};

class DerivedClass : public BaseClass
{
public:
    void member_function()
    {
        _public_member = 10;

        cout << "_public_member: " << _public_member << endl;

        _protected_member = 20;

        cout << "_protected_member: " << _protected_member << endl;
    }

};

class AnotherClass : public DerivedClass
{
public:
    void new_function()
    {
        _protected_member = 40;
        cout << "_protected_member: " << _protected_member << endl;
    }

};

int main()
{

    DerivedClass derived;
    // derived._protected_member = 30; // Error
    derived.member_function();

    AnotherClass another;
    another.new_function();

    return 0;
}