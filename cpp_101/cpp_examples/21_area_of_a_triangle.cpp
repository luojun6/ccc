#include <iostream>
#include <iomanip>  // std::fixed, std::setprecision

using std::cin;
using std::cout;
using std::endl;

double calculate_triangle_area(double height, double base);

int main()
{
    double height = 0;
    double base = 0;
    double area = 0;

    cout << "Height: ";
    cin >> height;

    cout << "Base: ";
    cin >> base;

    area = calculate_triangle_area(height, base);
    // area = 0.5 * base * height;

    cout << "Triangle Area: ";
    cout << std::fixed << std::setprecision(2) << area << endl;

    return 0;
}

double calculate_triangle_area(double height, double base)
{
    return 0.5 * base * height;
}