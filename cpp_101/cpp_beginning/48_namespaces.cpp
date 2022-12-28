#include <iostream>
#include <cmath>

using namespace std;

namespace raw
{
    void print(double number)
    {
        cout << "print raw: " << number << endl;
    }
}

namespace rounded
{   

    namespace inception
    {
        void print(double number)
        {
            cout << "print inception: " << number << endl;
        }
    }

    void print(double number)
    {
        cout << "print rounded: " << number << endl;
    }
}

namespace rounded::inter_ception
{
    void print_round(double number)
        {
            cout << "print inter_ception: " << round(number) << endl;
        }
}

int main()
{   
    raw::print(25.6789);
    rounded::print(2567.89);

    using namespace rounded;
    print(2567.89);
    raw::print(25.6789);

    using raw::print;
    print(25.6789);

    using namespace rounded;
    print(2567.89);

    namespace rnd = rounded;
    rnd::print(2567.89);
    rnd::inception::print(256.789);

    using namespace rounded::inception;
    print(256.789);

    rounded::inter_ception::print_round(256.789);

    return 0;
}