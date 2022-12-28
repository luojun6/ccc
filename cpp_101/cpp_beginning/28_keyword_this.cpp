#include <iostream>

using namespace std;

class Student;

void create_report(Student *student);
class Student
{
public:
    string name;
    int age;

    Student(string name, int age)
    {
        cout << "   this memory address: " << this << endl;
        this->name = name;
        this->age = age;
    }

    void set_age(int age)
    {
        this->age = 976;
    }

    void increase_age()
    {
        this->age = this->age+1;
    }

    void increase_and_output_age()
    {
        this->increase_age();
        cout << "age: " << age << endl;
    }

    void graduate()
    {
        cout << "Congratulation!" << endl;
        create_report(this);
    }

    // Student& set_name(name)
    // {
    //     this->name = "five sheets";
    //     return *this;
    // }

};

void create_report(Student *student)
{
    cout << (student->name) << " " << (student->age) << endl;
}

int main()
{
    Student student1("Lucas", 20);

    cout << "student1 memory address: " << &student1 << endl;

    student1.increase_and_output_age();
    student1.graduate();

    return 0;
}