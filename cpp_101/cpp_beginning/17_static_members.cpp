#include <iostream>

using namespace std;

class Square 
{
private:
    int _side_length;
    static int _total_squares;

    static void _increment_total()
    {
        _total_squares++;
    }

public:
    Square(int length)
    {
        _side_length = length;
        // _total_squares++;
        _increment_total();
    }

    int area()
    {
        cout << "Side Length: " << this->_side_length << endl;
        return _side_length * _side_length;
    }

    static int get_total()
    {
        return _total_squares;
    }
};

int Square::_total_squares = 0;

int main()
{

    Square sq1(5);

    cout << "sq1 area: " << sq1.area() << endl;
    cout << "Total Squares: " << Square::get_total() << endl;

    
    Square sq2(10);
    cout << "sq2 area: " << sq2.area() << endl;
    cout << "Total Squares: " << Square::get_total() << endl;

    return 0;
}