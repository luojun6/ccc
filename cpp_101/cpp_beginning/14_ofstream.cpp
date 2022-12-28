#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out_file;
    out_file.open("file.txt", ofstream::app);

    if (out_file.fail())
    {
        cout << "Error opening file." << endl;
        return 1; // Send the termination signal to process
    }

    out_file << "content" << endl;

    double x = 4.5;
    int y = 10;
    string z = "abc";

    out_file << x << endl;
    out_file << y << endl;
    out_file << z << endl;

    out_file.close();
}