#include <iostream>

using namespace std;

struct Point {
    float x;
    float y;
};

bool operator==(Point& first, Point& second) {
    return (
        first.x == second.x &&
        first.y == second.y
    );
}

ostream& operator<<(ostream& stream, Point& point) {
    stream << "(" << point.x << " " << point.y << ")";
    return stream; 
}

int main()
{
    Point pointA = {4.4, 8.8};
    Point pointB = {4.4, 8.8};
    Point pointC = {4.8, 8.4};

    cout << (pointA == pointB) << endl;
    cout << (pointA == pointC) << endl;
    cout << pointA << endl;
    cout << pointC << endl;

    return 0;
}