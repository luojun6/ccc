#include <iostream>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::ifstream file;
    file.open("file.txt");

    if (file.fail())
    {
        cout << "File failed to open." << endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    std::string file_contents;
    file_contents = buffer.str();
    cout << file_contents;
    
    file.close();

    return 0;
}