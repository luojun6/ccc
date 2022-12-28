#include <iostream>

using namespace std;

class Number
{
private:
    double *_number;

public:
    Number(double num)
    {
        _number = (double *)malloc(sizeof(double));
        *_number = num;
        cout << "Consturctor executing!" << endl;
        cout << "Number: " << *_number << endl << endl;
    }

    ~Number()
    {
        cout << "Desctructor executing!" << endl;
        cout << "Number: " << *_number << endl << endl;
        free(_number);
    }
};

void test()
{
    Number six(6);
}

int main()
{   
    Number *five = new Number(5); // New heap
    delete five;

    Number seven(7);
    test();

    return 0;
}