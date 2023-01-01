#include <iostream>
#include <cstring>  //std::strcat

using namespace std;

int main()
{

    string first_name = "Jun";
    string last_name = "luo";

    string full_name = first_name + " " + last_name;

    cout << "full_name: " << full_name << endl;

    string s1 = "ABC";
    char c1 = 'D';
    char c_style_string[] = "DEF";

    string test = s1 + c1 + c_style_string;
    cout << "test: " << test << endl;

    string string1 = "123";
    string string2 = "456";
    string1.append(string2);
    cout << "string1: " << string1 << endl;

    char c_string_1[7] = "HIJ";
    char c_string_2[] = "KLM";
    // strcat(c_string_1, c_string_2);
    // cout << c_string_1 << endl << endl;
    strncat(c_string_1, c_string_2, 2);
    cout << c_string_1 << endl << endl;

    return 0;
}