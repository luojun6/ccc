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

    std::string line;
    int lines = 0;
    while(!file.eof())
    {
        getline(file, line);
        lines++;
    }

    file.close();

    cout << "Total lines: " << lines << endl;

    return 0;
}