#include <iostream>

using namespace std;

class Data
{
public:
    int value;
    
    // Will disable the default construtor
    Data(int set_value)
    {
        value = set_value;
    }

    // Add the default back!
    Data() = default;

};

int main()
{
    Data data1;

    data1.value = 8;

    cout << "data1.value = " <<  data1.value << endl;

    return 0;
}


// Special member functions:

// Constructor
// Destructor
// Copy constructor
// Copy assignment
// Move constructor
// Move assignemt