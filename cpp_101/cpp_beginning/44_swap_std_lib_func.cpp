#include <iostream>

using namespace std;

class Data
{
public:
    int value;
};


int main()
{

    int a = 4;
    int b = 7;
    cout << "a: " << a << " b: " << b << endl;

    swap(a, b);
    cout << "After swapping: " << endl;
    cout << "a: " << a << " b: " << b << endl;

    cout << endl; 

    int x[] = {1, 2, 3};
    int y[] = {4, 5, 6};

    cout << "x[]: " << x[0] << "," << x[1] << "," << x[2] << endl;
    cout << "y[]: " << y[0] << "," << y[1] << "," << y[2] << endl;
    
    swap(x, y);
    cout << "After swapping: " << endl;
    cout << "x[]: " << x[0] << "," << x[1] << "," << x[2] << endl;
    cout << "y[]: " << y[0] << "," << y[1] << "," << y[2] << endl;

    Data data_x, data_y;
    data_x.value = 4;
    data_y.value = 7;
    cout << endl;

    cout << "X: " << data_x.value << " Y: " << data_y.value << endl;
    cout << "After swapping: " << endl;
    swap(data_x, data_y);
    cout << "X: " << data_x.value << " Y: " << data_y.value << endl;

    return 0;
}