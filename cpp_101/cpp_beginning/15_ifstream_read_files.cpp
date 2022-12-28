#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file;

    in_file.open("file.txt");

    if (in_file.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    // int number = 0;

    // in_file >> number;
    // in_file >> number;

    // if (in_file.fail())
    // {
    //     cout << "Error file format incorrect." << endl;
    //     return 1;
    // }

    // cout << number << endl;


    /*
    1.1 1.2 1.3
    */
    // double x1 = 0, x2 = 0, x3 = 0;
    // while (true)
    // {
    //     in_file >> x1 >> x2 >> x3;
    //     if (in_file.eof()) break;
    //     else
    //         cout << x1 << " " << x2 << " " << x3 << endl;
    // }

    /*
    1.1 1.2 1.3
    2.1 2.2 2.3
    3.1 3.2 3.3
    */
    // double a[3][3];
    // int i = 0;
    // while (in_file >> a[i][0] >> a[i][1] >> a[i][2])        
    //     i++;
    
    // cout << endl;
    // for (int j = 0; j < 3; j++)
    // {
    //     cout << a[j][0] << " ";
    //     cout << a[j][1] << " ";
    //     cout << a[j][2] << endl;
    // }

    // string line;
    // in_file >> line;

    // cout << line << endl;

    string line;
    // in_file >> line;
    getline(in_file, line);
    cout << line << endl;

    in_file.close();

    return 0;
}