#include <iostream>

using namespace std;

class Grade
{
private:
    double grade;

public:
    Grade(double grade) : grade(grade) {}    

    operator double()
    {
        return grade;
    }

    operator char()
    {
        if (grade >= 80) return 'A';
        else if (grade >= 70) return 'B';
        else if (grade >= 60) return 'C';
        else if (grade >= 50) return 'D';
        else if (grade >= 40) return 'E';
        else return 'F';

    }

};

int main()
{
    Grade grade1(47.25);

    double db1_grade1 = grade1;

    cout << "db1_grade1: " << db1_grade1 << endl;

    char chr_grade1 = grade1;
    cout << "chr_grade1: " << chr_grade1 << endl;

    return 0;
}