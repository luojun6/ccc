#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

static int s_level = 1;
static int s_speed = 2;


int main()
{
    s_speed = s_level > 5 ? 10 : 5;
    cout << "s_speed: " << s_speed << endl;

    return 0;
}