#include <iostream>

using namespace std;

class Animal
{
public:

    static int total;
    const string planet = "Earth";

    Animal(string animal_species)
    {
        _species = animal_species;
        total++;
    }

    ~Animal()
    {
        total--;
    }

    string get_species()
    {
        return _species;
    }

private:
    string _species;
};

int Animal::total = 0;

int main()
{
    Animal *lion = new Animal("lion");
    Animal *tiger = new Animal("tiger");

    cout << "Lion: " << lion->get_species() << endl;
    cout << "Tiger: " << tiger->get_species() << endl;

    cout << "Total: " << Animal::total << endl;

    Animal *bear = new Animal("bear");
    cout << "Total: " << tiger->total << endl;

    delete lion;
    delete tiger;
    cout << "Total: " << Animal::total << endl;

    delete bear;
    cout << "Total: " << Animal::total << endl;

    return 0;
}