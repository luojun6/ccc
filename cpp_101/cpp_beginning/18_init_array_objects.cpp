#include <iostream>

using namespace std;

class Square
{
public:
    int _side_length;
    string _color;

    void print()
    {
        cout << "side length: " << _side_length;
        cout << ", ";
        cout << "color: ";
        cout << _color << endl;
    }

    Square()
    {
        _side_length = 0;
        _color = "black";
    }

    Square(int length, string color)
    {
        _side_length = length;
        _color = color;
    }

    Square(int length)
    {
        _side_length = length;
    }
};

int main()
{
    Square sq0[3] ={
        Square(8, "red"),
        Square(4, "orange"),
        Square(2, "green")
    };

    for (int i = 0; i < 3; i++)
        sq0[i].print();

    Square sq1[3] ={
        Square(8, "red"),
        Square(4, "orange"),
        Square(2, "green")
    };

    for (int i = 0; i < 3; i++)
        sq1[i].print();

    Square sq2[3] ={
        2,
        Square(4, "orange")
    };

    for (int i = 0; i < 3; i++)
        sq2[i].print();

    return 0;
}