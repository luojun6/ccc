#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    std::ifstream file;

    std::string filename;
    int line_number;

    cout << "File: ";
    cin >> filename;

    cout << "Line: ";
    cin >> line_number;

    if (line_number <= 0)
    {
        cout << "Line number must be >=1!" << endl;
        return 1;
    }

    file.open(filename);

    if (file.fail())
    {
        cout << "File failed to open." << endl;
        return 1;
    }

    int current_line = 0;
    std::string line;

    while (!file.eof())
    {
        current_line++;
        getline(file, line);
        if (current_line == line_number) break;;
    }

    if (current_line < line_number)
    {
        cout << "Line not found!" << endl;
        cout << "File contains " << current_line;
        cout << " lines total." << endl;
    }
    else cout << "Line: " << line << endl;

    file.close();

    return 0;
}