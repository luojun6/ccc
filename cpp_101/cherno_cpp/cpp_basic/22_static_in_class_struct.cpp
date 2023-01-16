#include <iostream>

using std::cout;
using std::cin;
using std::endl;

extern int s_variable;

struct Entity
{
    static int x, y;

    void print()
    {
        cout << "Non-static print: " << x << ", " << y << endl;
    }

    static void static_print()
    {
        cout << "Static print: " << x << ", " << y << endl;
    }
};

int Entity::x;
int Entity::y;

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;
    e.print();
    e.static_print();

    Entity e1;
    e1.x = 5;
    e1.y = 8;
    e1.print();
    e.static_print();

    Entity::x = 4;
    Entity::y = 7;
    e.print();
    e1.print();
    e.static_print();

    return 0;
}