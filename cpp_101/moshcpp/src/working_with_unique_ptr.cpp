#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // unique_ptr<int> x(new int);
    auto x = make_unique<int>();
    // unique_ptr<int> y = make_unique<int>();
    auto y = make_unique<int>();

    auto numbers = make_unique<int[]>(10);

    *x = 10;
    cout << *x << endl;

    cout << numbers[0] << endl;

    return 0;
}