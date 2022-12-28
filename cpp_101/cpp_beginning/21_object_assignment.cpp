#include <iostream>

using namespace std;

class Simple
{
public:
    int x;
};

class Stack
{
public:
    Simple simple;
};

class Heap
{
public:
    Simple *simple;

    Heap(int set_x)
    {
        simple = new Simple;
        simple->x = set_x;
    }
};


int main()
{
    Simple simple_A;
    simple_A.x = 4;

    Simple simple_B;
    simple_B.x = 0;

    simple_B = simple_A;

    cout << "simple_A.x: " << simple_A.x << endl;
    cout << "simple_B.x: " << simple_B.x << endl;
    
    simple_B.x = 7;

    cout << "simple_A.x: " << simple_A.x << endl;
    cout << "simple_B.x: " << simple_B.x << endl;

    Stack stack_A;
    stack_A.simple.x = 4;

    Stack stack_B;
    stack_B.simple.x = 0;

    stack_B = stack_A;

    cout << "stack_A.simple.x: " << stack_A.simple.x << endl;
    cout << "stack_B.simple.x: " << stack_B.simple.x << endl;

    stack_B.simple.x = 7; 

    cout << "stack_A.simple.x: " << stack_A.simple.x << endl;
    cout << "stack_B.simple.x: " << stack_B.simple.x << endl;

    Heap heap_A(4);
    Heap heap_B(0);
    
    heap_B = heap_A; // Pointing variable of the simple object in heap_B
                     // been garbege


    cout << "heap_A.simple: " << heap_A.simple->x << endl;
    cout << "heap_B.simple: " << heap_B.simple->x << endl;
    heap_B.simple->x = 7;
    cout << "heap_A.simple: " << heap_A.simple->x << endl;
    cout << "heap_B.simple: " << heap_B.simple->x << endl;

    return 0;
}