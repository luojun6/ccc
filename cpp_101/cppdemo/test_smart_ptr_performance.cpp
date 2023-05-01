#include <iostream>
#include <chrono>
#include "shape.hpp"
#include "smart_ptr.h"

using std::cin; using std::cout; using std::endl;

#define COUNT 3000000

// Used implicit copy constructor of smart_ptr
void func1(smart_ptr<Shape> s){}

// Used explicit copy constructor of smart_ptr
void func2(const smart_ptr<Shape> &s){}

// Used move constructor of smart_ptr
void func3(smart_ptr<Shape> &&s){}

// NOT used smart_ptr
void func4(Circle &circle){}

void test_copy_performance()
{
    smart_ptr<Circle> init_circle(new Circle());
    
    auto start = std::chrono::system_clock::now();
    for (size_t i = 0; i < COUNT; i++)
    {
        func1(init_circle);
    }
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    cout << "Implicitly copy constructor elapsed time: "
         << elapsed_seconds.count() << "s" << endl;
    
    
    start = std::chrono::system_clock::now();
    for (size_t i = 0; i < COUNT; i++)
    {
        func2(init_circle);
    }
    end = std::chrono::system_clock::now();
    elapsed_seconds = end - start;
    cout << "Explicitly copy constructor elapsed time: "
         << elapsed_seconds.count() << "s" << endl;
    
    start = std::chrono::system_clock::now();
    for (size_t i = 0; i < COUNT; i++)
    {
        func3(std::move(init_circle));
    }
    end = std::chrono::system_clock::now();
    elapsed_seconds = end - start;
    cout << "Move constructor elapsed time: "
         << elapsed_seconds.count() << "s" << endl;
    
    start = std::chrono::system_clock::now();
    for (size_t i = 0; i < COUNT; i++)
    {
        Circle *circle = new Circle();
        func4(*circle);
    }
    end = std::chrono::system_clock::now();
    elapsed_seconds = end - start;
    cout << "Not using smart pointor elapsed time: "
         << elapsed_seconds.count() << "s" << endl;
}

int main(int agrc, char** argv)
{
    test_copy_performance();
    return 0;
}

