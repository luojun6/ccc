#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::string;

class Shape
{
public:
    virtual double area() = 0;
};


class Square : public Shape
{
public:
    double side;

    Square(double side) : side(side) {}

    double area()
    {
        return side * side;
    }

};

class Triangle : public Shape
{
public:
    double base;
    double height;

    Triangle(double base, double height) : 
        base(base), height(height) {}

    double area()
    {
        return (base * height) / 2;
    }

};  

int main()
{

    // Error, abstract class cannot be instantialized
    // Shape shape; 

    Shape *shapes[] = {
        new Square(5),
        new Triangle(8, 10),
        new Square(7),
        new Triangle(3, 4)
    };

    for (int i = 0; i < 4; i++)
        cout << "Shape " << i << ": " 
             << shapes[i]->area() << endl;
    

    return 0;
}