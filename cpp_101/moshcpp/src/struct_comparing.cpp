#include <iostream>

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

    bool equals (const Movie& movie) {
        // movie.title = "A"; // Error
        return ( 
            title == movie.title &&
            releaseDate.year == movie.releaseDate.year &&
            releaseDate.month == movie.releaseDate.month && 
            releaseDate.day == movie.releaseDate.day
        );
    }

    bool operator==(const Movie& movie) const {
        // title = "A"; // Error
        return ( 
            title == movie.title &&
            releaseDate.year == movie.releaseDate.year &&
            releaseDate.month == movie.releaseDate.month && 
            releaseDate.day == movie.releaseDate.day
        );
    }
};

bool operator==(const Movie& first, const Movie& second) {
        // title = "A"; // Error
        return ( 
            first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month && 
            first.releaseDate.day == second.releaseDate.day
        );
    }

ostream& operator<<(ostream& stream, Movie& movie) {
    stream << movie.title;
    return stream;
}

Movie getMovie() {
    return {"Terminator", 1984};
}

void showMovie(Movie* movie){
    cout << movie->title << endl;
}

int main()
{
    auto movie = getMovie();
    showMovie(&movie);

    return 0;
}