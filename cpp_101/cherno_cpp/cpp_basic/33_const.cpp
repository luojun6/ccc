#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Entity
{
private:
    int _x, _y;
    int *_a, *_b;

public:
    int get_x() const 
    {   
        // The const make the get_x() not able to modify anything
        // _x = 888; -> Error!
        return _x;
    }

    void set_x(int x)
    {
        _x = x;
    }

    const int* const get_a() const
    {
        return _a;
    }

};

void print_entity(const Entity& e)
{
    // const here is to avoiding modifing Entity object e.
    cout << e.get_x() << ", " << e.get_a() << endl;
}

void change_pointer_to_const()
{
    const int MAX_AGE = 120;
    int *a = new int;

    *a = 2; // const int *a = new int; -> Error
    a = (int*)&MAX_AGE; // int *const a = new int; -> Error

    *a = 140;
    cout << *a << endl;
}

int main(int argc, char** argv)
{
    // change_pointer_to_const();

    return 0;
}