#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Entity
{
private:
    string _name;
    int _score;
public:
    Entity() : _name("Unknown"), _score(0) {}
    Entity(string name) : _name(name), _score(0) {}
    Entity(string name, int score) : 
        _name(name), 
        _score(score) 
        {}

    const string& get_name() const 
    {
        return _name;
    }

    const int& get_score() const 
    {
        return _score;
    }
};

int main()
{

    Entity e;
    cout << e.get_name() << endl;

    Entity e_name("Lawjune");
    cout << e_name.get_name() << endl;

    Entity e_name_score("Lawjune", 7);
    cout << e_name_score.get_name() << 
    " with " << e_name_score.get_score() << endl;
}
