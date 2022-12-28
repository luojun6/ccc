#include <iostream>

using namespace std;

int main()
{
    // if (5 == 5)
    // {
    //     cout << "5 does equal to 5!" << endl;
    // }

    int price = 40;

    if (price <= 90)
    {
        cout << "price <= 90" << endl;
        cout << "Good deal!" << endl;
    }

    else if (price < 50)
    {
        // It will not be executed ever!
        cout << "Amazing deal!" << endl;
    }

    else if (price > 200)
    {
        cout << "Very bad price!" << endl;
    }

    else
        cout << "Not a good deal!" << endl;
    
    cout << "If Statement Done!" << endl;

    return 0;
}