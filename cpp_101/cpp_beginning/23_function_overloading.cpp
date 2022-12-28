#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

double add(double x, double y, double z)
{
    return x + y + z;
}

// Same function name and paremeters => error!!!
// double add(double a, double b, double c)
// {
//     return a + b + c;
// }

class Add
{
public:
    int add(int x, int y)
    {
        return x + y;
    }

    int add(int x, int y, int z)
    {
        return x + y + z;
    }

    double add(double x, double y, double z)
    {
        return x + y + z;
    }

};

int main()
{

    cout << add(10, 5) << endl;
    cout << add(5, 10, 15) << endl;
    cout << add(10.5, 10.7, 15.4) << endl;
    
    // cout << add(10.5, 10.7, 15.4) << endl; // Error!!!
    cout << endl;

    Add add_obj;
    cout << add_obj.add(10, 5) << endl;
    cout << add_obj.add(5, 10, 15) << endl;
    cout << add_obj.add(10.5, 10.7, 15.4) << endl;

    return 0;
}