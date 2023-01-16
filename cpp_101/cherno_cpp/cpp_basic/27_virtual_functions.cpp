#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Entity
{
public:
    virtual std::string get_name() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string _name;

public:
    Player(const std::string& _name):_name(_name) {}

    std::string get_name() override { return _name; }
};

int main()
{
    Entity* e = new Entity();
    cout << e->get_name() << endl;

    Player* p = new Player("Lawjune");
    cout << p->get_name() << endl;

    Entity* entity = p;
    cout << entity->get_name() << endl;

    delete e;
    delete p;
    delete entity;

    return 0;
}