#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
public:
    string name;
    float balance;
    
    void withdraw(float amount)
    {
        balance = balance - amount;
    }

    void print_out()
    {
        cout << name << " has " << balance << " dollors. " << endl;
    }
};

int main()
{
    BankAccount account_1;
    account_1.name = "Nageeb";
    account_1.balance = 3000;

    // cout << account_1.name << " has " << account_1.balance << " dollors. " << endl;
    account_1.print_out();

    BankAccount account_2;
    account_2.name = "Kulvidner";
    account_2.balance = 1000;
    // cout << account_2.name << " has " << account_2.balance << " dollors. " << endl;
    account_2.print_out();
    // account_2.balance = account_2.balance - 100;
    account_2.withdraw(100);
    // cout << account_2.name << " has " << account_2.balance << " dollors. " << endl;
    account_2.print_out();

    return 0;
}