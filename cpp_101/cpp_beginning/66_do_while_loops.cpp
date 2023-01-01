#include <iostream>

using namespace std;

int main()
{

    // int i = 0;
    // do
    // {
    //     cout << "i: " << i << endl;
    //     // if (i == 1) break;
    //     if (i == 0 || i == 4)
    //     {
    //         i += 2;
    //         continue;
    //     }
    //     i++;
    // } while( i < 7);

    int month = 0;
    do
    {
        cout << "Month (1-12): ";
        cin >> month;   
    } while (month < 1 || month > 12);
    
    cout << "Loop done!" << endl;

    return 0;
}
