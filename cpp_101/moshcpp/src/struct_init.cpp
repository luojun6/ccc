#include <iostream>

using namespace std;

struct Movie {
    string title = "";
    int releaseYear = 0;
    bool isPopular = false;
};


int main()
{
    Movie movie = {"Terminator", 1984};

    cout << movie.title << " " << movie.releaseYear << endl;

    return 0;
}