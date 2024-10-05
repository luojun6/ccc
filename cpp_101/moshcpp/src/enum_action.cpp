#include <iostream>

using namespace std;

enum class Action {
    List = 1,
    Add,
    Update
};

enum class Operation {
    List = 1,
    Add,
    Update
};

int main() {

    cout << 
         "1: List invoices" << endl <<
         "2: Add invoices" << endl <<
         "3: Update invoices" << endl << 
         "Select: ";

    int input;
    cin >> input;
    // if (input == Action::List)
    if (input == static_cast<int>(Action::List)) {
        cout << "List invoices" << endl;
    }

    return 0;
}