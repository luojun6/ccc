#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Printable
{
public:
    virtual std::string get_class_name() = 0;
};

class Entity
{
public:
    virtual std::string get_name() = 0;
};

class Player : public Entity, Printable
{
private:
    std::string _name;
    std::string get_class_name() { return "Entity";}

public:
    Player(const std::string& _name):_name(_name) {}

    std::string get_name() override { return _name; }
};

void print(Printable *obj)
{
    cout << obj->get_class_name() << endl;
};


int main()
{

    Player* p = new Player("Lawjune");
    cout << p->get_name() << endl;

    Entity* entity = p;
    cout << entity->get_name() << endl;

    delete p;

    return 0;
}