#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using std::cout;
using std::cin;
using std::endl;


// void for_each(const std::vector<int>& values, void(*func)(int))
void for_each(const std::vector<int>& values, const std::function<void(int)>& func)
{
    for (int value:values)
        func(value);
}

int main()
{
    std::vector<int> values = { 1, 5, 4, 2, 3};
    auto it = std::find_if(values.begin(), values.end(), [](int value){ return value > 3; });
    cout << *it << endl;

    // Outside variable
    int a = 5;

    auto lambda = [=](int value) { cout << "value: " << (value + a) << endl; };
    for_each(values, lambda);

    return 0;
}