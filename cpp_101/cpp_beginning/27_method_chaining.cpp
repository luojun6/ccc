#include <iostream>

using namespace std;

class Rectangle
{
public:
    int length;
    int width;
    string color;

    Rectangle(int set_length, int set_width, string set_color)
    {
        length = set_length;
        width = set_width;
        color = set_color;
    }

    void print()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Color: " << color << endl;
    }

    Rectangle& setColor(string set_color)
    {
        color = set_color;
        return *this;
    }

    Rectangle& setLength(int set_length)
    {
        length = set_length;
        return *this;
    }

};

int main()
{

    Rectangle rect1(4, 5, "red");
    rect1.print();

    cout << endl;

    rect1.setColor("blue").setLength(7);
    rect1.print();

    return 0;
}