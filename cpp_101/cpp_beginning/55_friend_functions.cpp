#include <iostream>

using namespace std;

class MyClass
{
    friend void double_x(MyClass &object);

private:
    int x;

    void add(int n)
    {
        x += n;
    }

public:
    MyClass(int x) : x(x) {};

    void print()
    {
        cout << "x: " << x << endl;
    }
};

void double_x(MyClass &object)
{
    // object.x *= 2;
    int current_x_value = object.x;
    object.add(current_x_value);
}

class Revenue;
class Costs;

class Revenue
{
    friend bool profit(Revenue rev, Costs cos);

private:
    int revenue;

public:
    Revenue(int revenue) : revenue(revenue) {};

    bool rev_profit(Costs cos);
};

class Costs
{
    friend bool profit(Revenue rev, Costs cos);
    friend bool Revenue::rev_profit(Costs cos);

private:
    int costs;

public:
    Costs(int costs) : costs(costs) {}
};

bool profit(Revenue rev, Costs cos)
{
    if (rev.revenue > cos.costs) return true;
    else return false;
}

bool Revenue::rev_profit(Costs cos)
{
    if (revenue > cos.costs) return true;
    else return false;
}


int main()
{
    MyClass myobject(7);
    myobject.print();
    // myobject.add(4); // error
    double_x(myobject);
    myobject.print();

    Revenue revenue(1000);
    Costs costs(500);

    if (profit(revenue, costs)) cout << "profit!" << endl;
    else cout << "No profit!" << endl;

    if (revenue.rev_profit(costs)) cout << "profit!" << endl;
    else cout << "No profit!" << endl;

    return 0;
}