#include <iostream>
#include <algorithm> // std::count

using std::cin;
using std::cout;
using std::endl;

long count_occurrences(std::string text, char character)
{
    return std::count(text.begin(), text.end(), character);
}

int main()
{
    std::string text;
    char character;

    cout << "String: ";
    getline(cin, text);

    cout << "Character: ";
    cin >> character;

    // int occurrences = 0;
    // for (int i = 0; i < text.length(); i++)
        // if (text[i] == character) occurrences++;
    // for (char c : text)
    //     if (c == character) occurrences++;

    long occurrences = 0;
    // occurrences = std::count(text.begin(), text.end(), character);
    occurrences = count_occurrences(text, character);

    cout << occurrences << " occurrences" << endl;

    return 0;
}