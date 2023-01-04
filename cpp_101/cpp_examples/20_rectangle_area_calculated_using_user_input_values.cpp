#include <iostream>
#include <iomanip>  // std::fixed, std::setprecision

using std::cin;
using std::cout;
using std::endl;

double calculate_rectangle_area(double length, double width);

int main()
{

    double length = 0;
    double width = 0;
    double area = 0;

    cout << "Length: ";
    cin >> length;

    cout << "Width: ";
    cin >> width;

    area = calculate_rectangle_area(length, width);
    cout << "Area: ";
    cout << std::fixed << std::setprecision(2) << area << endl;

    return 0;
}

double calculate_rectangle_area(double length, double width)
{
    return length * width;
}