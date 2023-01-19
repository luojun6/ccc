#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


void print_string(const std::string &str)
{
    cout << str << endl;
}

int main()
{

    std::string name = "Jun";
    name = name + " Luo";
    // cout << name << endl;
    print_string(name);

    bool contains_Luo = name.find("Luo") != std::string::npos;
    cout << "contains_Luo: " << contains_Luo << endl;

    return 0;
} 