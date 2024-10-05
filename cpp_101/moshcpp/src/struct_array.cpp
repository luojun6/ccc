#include <iostream>
#include <vector>

using namespace std;

struct Movie {
    string title = "";
    int releaseYear = 0;
    bool isPopular = false;
};


int main()
{
    vector<Movie> movies;
    // Movie movies[5];
    movies.push_back({"Movie A", 2001});
    movies.push_back({"Movie B", 2002});
    movies.push_back({"Movie C", 2003});
    movies.push_back({"Movie D", 2004});
    
    for (const auto& movie: movies)
        cout << movie.title << endl;

    return 0;
}