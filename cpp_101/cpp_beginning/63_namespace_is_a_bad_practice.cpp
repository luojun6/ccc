#include <iostream>
#include <algorithm> // std::min
// #include "63_library.h"

// using namespace std;

namespace ns1
{
    void func1()
    {
        std::cout << "func1() ns1" << std::endl;
    }
}

namespace ns2
{
    void func1()
    {
        std::cout << "func1() ns2" << std::endl;
    }
}

// using namespace ns1; // Will pollute the global func1

// Will make the func1 ambiguous error
void func1()
{
    std::cout << "func1() global" << std::endl;
}

// using namespace std; // Will pollute the template min function

template <class T>
const T& min(const T& a, const T& b)
{
    return b;
}

using std::cout; 
using std::endl;

int main()
{

    // std::cout << "Hello, World!" << std::endl;
    // ns1::func1();
    func1();
    ns2::func1();

    // Will be polluted by including "63_library.h"
    cout << "template min: " << min(4, 5) << endl;
    
    cout << "std min: " << std::min(4, 5) << endl;

    return 0;
}