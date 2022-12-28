#include <iostream>

using namespace std;

class Rectangle
{
private:
    double _length;
    double _width;

    double area()
    {
        return _length * _width;
    }

public:
    // We can't set default value here
    void set_dimensions(double l, double w)
    {
        _length = l;
        _width = w;
    }

    // Prototype definition
    double perimeter();
    void print_area()
    {
        cout << "Area: " << area() << endl;
    }
};

double Rectangle::perimeter()
{
    return 2 * (_length + _width);
}

int main()
{
    Rectangle rect1;
    rect1.set_dimensions(4, 7);

    cout << "Perimeter: " << rect1.perimeter() << endl;
    rect1.print_area();

    return 0;
}