#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Square
{
public:
    int side;

    Square(int side) : side(side) {}

};

bool compare_squares(Square x, Square y)
{
    return x.side < y.side;
}

int main()
{   

    int array1[] = {9,4,5,8,3,7,2,6,0,1};
    // sort(array1, array1 + 10);
    sort(array1, array1 + 10, greater<int>());

    for (int i = 0; i < 10; i++)
        cout << array1[i] << " ";
    cout << endl;

    Square array2[] = {
        Square(6),
        Square(9),
        Square(4),
        Square(3)
    };

    sort(array2, array2+4, compare_squares);

    for (int i = 0; i < 4; i++)
        cout << array2[i].side << " ";
    cout << endl;
    
    vector<int> vector1{9,4,5,8,3,7,2,6,0,1};
    sort(vector1.begin(), vector1.end());

    for (int value : vector1)
        cout << value << " ";
    cout << endl;

    return 0;
}