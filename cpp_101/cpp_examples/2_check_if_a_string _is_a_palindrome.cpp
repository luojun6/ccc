#include <iostream>

using namespace std;

bool is_palindrome(string text)
{
    for (int i = 0; i < text.length() / 2; i++)
        if (text[i] != text[text.length() - i -1])
            return false;
    return true;
}

void print_is_palindrome(string text)
{
    if(is_palindrome(text))
        cout << text << " -> is a palindrome." << endl;
    else
        cout << text << " -> is NOT a palindrome." << endl;
}

int main()
{

    // Palindrome means the reversed string is the same
    string test1 = "abccba"; // abccba, it's a palindrome
    string test2 = "race star"; // rats ecar, which is not a plindrome

    // cout << test1 << "is palidnrome? " << is_palindrome(test1) << endl;
    // cout << test2 << "is palidnrome? " << is_palindrome(test2) << endl;

    print_is_palindrome(test1);
    print_is_palindrome(test2);

    return 0;
}
