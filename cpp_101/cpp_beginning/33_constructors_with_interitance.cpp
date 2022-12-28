#include <iostream>

using namespace std;

class MenuItem
{
public:
    string name;

    MenuItem(): name("unknown") 
    {
        cout << "Base Class Default Constructor" << endl;
    }

    MenuItem(string set_name) : name(set_name)
    {
        cout << "Base Class Param Constructor" << endl;
    }

};

class Drink : public MenuItem
{
public:
    double ounces;

    using MenuItem::MenuItem;

    Drink() : ounces(8) 
    {
        cout << "Derived Class Default Constructor" << endl;
    }

    Drink(double set_ounces) : MenuItem("n/a"), ounces(set_ounces)
    {
        cout << "Derived Class Param Constructor" << endl;
    }

};

int main()
{

    Drink hot_chocolate("hot_chocolate");

    return 0;
}