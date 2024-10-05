#include <iostream>

using namespace std;

bool isValid(const string customerNumber)
{
    if (customerNumber.length() != 6)
        return false;

    for (int i = 0; i < 2; i++)
        if(!isalpha(customerNumber[i]))
            return false;
    
    for (int i = 2; i < customerNumber.length(); i++)
        if(!isdigit(customerNumber[i]))
            return false;
    
    return true;

}

int main()
{
    string customerNumber = "AB1234";

    cout << isValid(customerNumber) << endl;

    return 0;
}