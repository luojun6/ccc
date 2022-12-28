#include <iostream>

using namespace std;

class Rectangle
{
public:
    int length;
    int width;
    int area;
    string color;

    Rectangle(int l, int w)
    {
        length = l;
        width = w;

        area = length * width;

        cout << "Constructor 1" << endl;
    }

    Rectangle(int l, int w, string c) : Rectangle(l, w)
    {
        // length = l;
        // width = w;
        color = c;
        // area = length * width;
        cout << "Constructor 2" << endl;
    }

    void print()
    {
        cout << "length: " << length << endl;
        cout << "width: " << width << endl;
        cout << "area: " << area << endl;
        cout << "color: " << color << endl;
    }
};

int main()
{
    Rectangle rt1(5, 10, "red");
    rt1.print();

    return 0;
}