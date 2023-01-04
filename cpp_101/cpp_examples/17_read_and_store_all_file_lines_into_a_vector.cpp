#include <iostream>
#include <fstream>
#include <vector>

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

    std::vector<std::string> contents;
    std::string line;

    while (!file.eof())
    {
        getline(file, line);
        contents.push_back(line);
    }

    file.close();

    for (auto file_line : contents)
        cout << file_line << endl;

    return 0;
}