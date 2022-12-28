#include <iostream>

using namespace std;

class MenuItem
{
public:
    string name;
    double calories;

    void print()
    {
        cout << name << " (" << calories << " cal)" << endl;
    }

};

class Drink : public MenuItem
{
public:
    double ounces;

    double cal_per_ounce()
    {
        return calories / ounces;
    }

};

class HotDrink : public Drink
{
public:
    double temperature;

    void serving_instructions()
    {
        cout << "Serve " << ounces << "ounces at "
             << temperature << " degrees F" << endl;
    }

};


int main()
{

    HotDrink hot_chocolate;

    hot_chocolate.name = "Hot Chocolate";
    hot_chocolate.calories = 200;
    hot_chocolate.ounces = 8;
    hot_chocolate.temperature =77;

    hot_chocolate.print();
    hot_chocolate.serving_instructions();

    return 0;
}