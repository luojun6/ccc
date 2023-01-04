#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    for (int i = 1; i <= 100; i++)
    {

        if ((i % 3 == 0) && (i % 5 == 0))
            cout << "FizzBuzz" << endl;

        else if (i % 3 == 0)
            cout << "Fizz" << endl;

        else if (i % 5 == 0)
            cout << "Buzz" << endl;

        else
            cout << i << endl;

    }

    return 0;
}

// The Fizz Buzz sequence from 1 - 17;

// 1
// 2
// Fizz        (3 % 3 == 0)
// 4
// Buzz        (5 % 5 == 0)
// Fizz        (6 % 3 == 0)
// 7
// 8
// Fizz        (9 % 3 == 0)
// Buzz        (10 % 5 == 0)
// 11
// Fizz        (12 % 3 == 0)
// 13
// 14
// Fizz Buzz   (15 % 3 == 0 AND 15 % 5 == 0)
// 16
// 17