#include <iostream>
#include <string>
#include <stdlib.h> 

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // char* name = "Lawjune";      // Stored in a const data segment
    const char* name = u8"Lawjune";   // Right statement
    // name[2] = 'a'; // Error -> Segmentation fault (core dumped)
    cout << name << endl;


    const wchar_t* name_wchar_t = L"Lawjune";
    const char16_t* name_char16_t = u"Lawjune";
    const char32_t* name_char32_t = U"Lawjune";

    // cout << "name_wchar_t: " << name_wchar_t << endl;
    // cout << "name_char16_t: " << name_char16_t << endl;
    // cout << "name_char32_t: " << name_char32_t << endl;
  
    using namespace std::string_literals;
    std::string name0 = std::string("Lawjune") + " hello";
    std::string name1 = "Lawjune"s + " hello";
    std::wstring name2 = L"Lawjune"s + L" hello";
    std::u32string name3 = U"Lawjune"s + U" hello";

    char* example = R"(line1
    line2
    line3
    line4)";
    cout << example <<endl;

    const char* ex = "Line1\n"
        "Line2\n"
        "Line3\n";
    cout << ex <<endl;

    return 0;
}
