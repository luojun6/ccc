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

class DerivedClass1 : public BaseClass
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

class DerivedClass2 : protected BaseClass
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

class DerivedClass3 : private BaseClass
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

class NextLevel : public DerivedClass3
{
public:
    void member_function()
    {
        // Error!!!
        // _public_member = 10;

        // cout << "_public_member: " << _public_member << endl;

        // _protected_member = 20;

        // cout << "_protected_member: " << _protected_member << endl;
    }

};


int main()
{
    DerivedClass1 derived1;
    // derived1._protected_member = 30; // Error
    derived1.member_function();

    DerivedClass2 derived2;
    // derived2._protected_member = 30; // Error
    // derived2._public_member = 40; // Error
    derived2.member_function();

    DerivedClass3 derived3;
    // derived3._protected_member = 30; // Error
    // derived3._public_member = 40; // Error
    derived3.member_function();

    return 0;
}


//  This table shows which access specifier will result in the derived class for 
//  which combination of base class access specifier and member access specifier
//  in the base class.
// 
//
//                    *              Member Access Level
//  Base Class        *
//  Access Specifier  *   Private          Protected       Public
//  *****************************************************************
//                    *
//  Public            *   Inaccessible     Protected       Public
//                    *
//  Protected         *   Inaccessible     Protected       Protected
//                    *
//  Private           *   Inaccessible     Private         Private
//
//
//  The base class access specifier will affect how members are inherited by the
//  derived class.  For example, when using the proteted acces specifier when 
//  inheriting the base class, the public members of the base class will become 
//  protected members of the derived class.  Generally, we use the public 
//  specifier. Notably, if no access specifier is provided the default is 
//  private.
//