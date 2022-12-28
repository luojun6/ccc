#include <iostream>
#include <string>

using namespace std;

int main()
{
    string test1 = "abcdefghi";

    cout << test1 << endl;

    cout << "Size: " << test1.size() << endl;

    cout << "test1[1]: " << test1[1] << endl;
    cout << "test1.at(3): " << test1.at(3) << endl;

    test1[2] = 'C';
    cout << test1 << endl;

    test1 = test1 + "jklmnop";
    test1 += "qrstu";
    test1.append("vwxyz");
    cout << test1 << endl;

    // Same as size()
    cout << "length: " << test1.length() << endl;

    string test2 = "123";
    string test3;

    test3 = test1 + test2;
    cout << "test3: " << test3 << endl;

    test3.clear();
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    string test4 = to_string(-10.5);
    cout << "test4: " << test4 << endl;

    string test5 = to_string(true);
    cout << "test5: " << test5 << endl;

    double number = stod(test4);
    cout << "number: " << number << endl;

    string test6 = "A test string";
    string sub = test6.substr(2, 4);
    cout << "sub: " << sub << endl;

    string name;
    cout << "Enter name: ";
    // cin >> name;
    getline(cin, name);
    cout << "Name: " << name << endl;

    return 0;
}