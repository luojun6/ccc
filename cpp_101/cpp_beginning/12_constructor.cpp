#include <iostream>

using namespace std;

class Cat
{
private:
    string _name;
    string _color;
    string _favorite_toy;

public:
    void print_cat()
    {
        cout << "Name: " << _name << endl;
        cout << "Color: " << _color << endl;
        cout << "Favorite Toy: " << _favorite_toy << endl;
    }    

    Cat()
    {
        _name = "Unknown";
        _color = "Unknown";
        _favorite_toy = "Unknown";
    }

    Cat(string n)
    {
        _name = n;
        _color = "Unknown";
        _favorite_toy = "Unknown";
    }

    Cat(string n, string c)
    {
        _name = n;
        _color = c;
        _favorite_toy = "Unknown";
    }

    Cat(string n, string c, string ft = "Laser Pointer")
    {
        _name = n;
        _color = c;
        _favorite_toy = ft;
    }
};   

int main()
{
    Cat cat1;

    cout << "Cat 1..." << endl;
    cat1.print_cat();
    cout << endl;

    Cat cat2("Spot");

    cout << "Cat 2..." << endl;
    cat2.print_cat();
    cout << endl;

    Cat cat3("Lawjune", "Yellow", "Laser Pointer");

    cout << "Cat 3..." << endl;
    cat3.print_cat();
    cout << endl;
    
    return 0; 
}