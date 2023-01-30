#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

void print_value(int value)
{
    cout << "value: " << value << endl;
}

void for_each(const std::vector<int>& values, void(*func)(int))
{
    for (int value:values)
        func(value);
}

int main()
{
    std::vector<int> values = { 1, 5, 4, 2, 3};
    for_each(values, print_value);
    for_each(values, [](int value) { cout << "value: " << value << endl; });

    return 0;
}

// void hello_world(int a)
// {
//     cout << "Hello World!" << a << endl;
// }

// int main()
// {
//     // void(*func)() = hello_world;
//     // auto func = hello_world;

//     typedef void(*hello_world_func)(int);
//     hello_world_func func = hello_world;

//     func(3);
//     func(7);

//     return 0;
// }