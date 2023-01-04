#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    std::string filename;
    cout << "File name: ";
    cin >> filename;

    std::ifstream file;
    file.open(filename);

    if (file.fail())
    {
        cout << "Error of openning file." << endl;
        return 1;
    }

    double number = 0;
    double sum = 0;
    double total = 0;

    while(file >> number)
    {
        // cout << number << endl;
        sum = sum + number;
        total = total + 1;
    }

    cout << "Sum: " << sum << endl;

    double average = sum / total;

    cout << "Average: " << average << endl;

    file.close();

    return 0;
}