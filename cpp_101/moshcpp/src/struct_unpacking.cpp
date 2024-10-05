#include <iostream>

using namespace std;

struct Movie {
    string title = "";
    int releaseYear = 0;
    bool isPopular = false;
};


int main()
{
    Movie movie = {"Terminator", 1984, true};

    auto [title, releaseYear, isPopular] {movie};

    cout << title << " " << releaseYear << " " << isPopular << endl;

    return 0;
}