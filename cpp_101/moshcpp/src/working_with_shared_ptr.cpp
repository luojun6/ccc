#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // shared_ptr<int> x = make_shared<int>();
    auto x = make_shared<int>();

    *x = 10;

    shared_ptr<int> y(x);

    if (x == y)
        cout << "Equal" << endl;

    return 0;
}