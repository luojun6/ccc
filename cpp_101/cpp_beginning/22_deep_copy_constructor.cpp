// Define a copy constructor to create a deep copy of an object
// Against the default copy --- shallow copy

#include <iostream>

using namespace std;

class BasicNumber
{
public:
    int n;

    // If using defaul shallow copy constructor
    // Never call the BasicNumber constructor for num2
    BasicNumber(int set_n)
    {
        n = set_n;
    }

    BasicNumber(const BasicNumber& basic_number)
    {
        n = 2* basic_number.n;
        cout << "Copy constructor called: " << n << endl;
    }

};

class Number
{
public:
    int *n;

    Number(int set_n)
    {
        n = (int *) malloc(sizeof(int));
        *n = set_n;
    }

    Number(const Number& other_number)
    {
        n = (int *) malloc(sizeof(int));
        *n = *(other_number.n);
    }

    ~Number()
    {
        free(n);
    }

    int get()
    {
        return *n;
    }

};

int main()
{

    BasicNumber num1(7);

    cout << "num1: " << num1.n << endl;

    BasicNumber num2 = num1;
    cout << "num2: " << num2.n << endl;

    cout << endl;

    Number numA(8);
    cout << "numA: " << numA.get() << endl; 

    Number numB = numA;
    // Problem: numB.n and numA.n point to the same memory address of *n
    cout << "numB: " << numB.get() << endl; 

    *(numA.n) = 20;
    cout << "numA: " << numA.get() << endl; 
    cout << "numB: " << numB.get() << endl; 

    // Deconstructors of numA and numB both calls `free(n)`
    // exit(0);

    return 0;
}