#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Mutable -> can change = the opposite of const

class Entity
{
private:
    string _name = "entity";
    mutable int _debug_count = 0;
public:
    const string& get_name() const 
    {
        _debug_count++;
        return _name;
    }

};

int main()
{
    const Entity e;
    cout << e.get_name() << endl;

    // Rare in practice
    int x = 8;
    auto f = [=]() mutable
    {
        x++;
        cout << x << endl;
    };

    f();

    return 0;
}