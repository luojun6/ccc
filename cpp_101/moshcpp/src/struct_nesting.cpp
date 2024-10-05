#include <iostream>
#include <vector>

using namespace std;

struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title = "";
    Date releaseDate = {1970, 1, 1};
    bool isPopular = false;
};


int main()
{
    Movie movie {"Terminator", {1984, 6, 1}, true};

    cout << movie.releaseDate.year << endl;

    return 0;
}