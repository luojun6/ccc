#include <iostream>

using namespace std;

class Number
{
public:
    int n;

    Number(int set_n)
    {
        n = set_n;
    }

    Number operator+(const Number &other_num)
    {
        // cout << "this->n: " << this->n << endl;
        // cout << "other_num.n: " << other_num.n << endl;
        return Number(this->n + other_num.n);
    }

    bool operator==(const Number &other_num)
    {
        return (this->n == other_num.n);
    }

};

int main()
{   
    Number a(5);
    Number b(10);

    Number c = a + b;
    cout << "c.n: " << c.n << endl;

    if (a == c) cout << "a == c" << endl;
    else cout << "a != c" << endl;

    Number d(15);
    if (d == c) cout << "d == c" << endl;
    else cout << "d != c" << endl;

    return 0;
}