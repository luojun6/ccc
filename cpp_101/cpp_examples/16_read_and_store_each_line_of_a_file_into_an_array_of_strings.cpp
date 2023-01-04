#include <iostream>
#include <fstream>

#define MAX_LINES 1000

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

    std::string array[MAX_LINES];

    int lines = 0;
    while(!file.eof())
    {
        getline(file, array[lines]);
        lines++;

        if (lines == MAX_LINES)
        {
            cout << "Max storage reached!" << endl;
            break;
        }
    }

    file.close();

    for (int i = 0; i < lines; i++)
    cout << array[i] << endl;

    return 0;
}