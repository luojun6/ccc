#include <iostream>

using namespace std;

class Major
{
public:
    string name;

    Major() : name("Undeclared") 
    {
        cout << "Major Consturctor (Undeclared)" << endl;
    }

    Major(string name): name(name) 
    {
        cout << "Major Consturctor (" << name << ")" << endl;
    }

};

class Minor
{
public:
     string name;

     Minor(string name) : name(name) {}

};

class Student
{
public:
    string name;
    int start_year;
    int grad_year;
    // string id;
    const string id; // Have to be init by using member initialization
    Major major;
    // Minor minor;
    Minor &minor1;
    Minor minor2;

    // Student(string set_name, int set_start_year)
    // {
    //     this->name = set_name;
    //     this->start_year = set_start_year;
    // }

    Student(string name, int start_year, string major, Minor &minor): 
    name(name), 
    start_year(start_year), 
    grad_year(start_year + 4), 
    id(name.append(to_string(start_year))),
    major(major),
    // minor(Minor("Physics"))
    // minor1(Minor("Economics")),
    minor1(minor),
    minor2(Minor("Physics"))
    {
        // this->minor1 = minor1; // Error
        // this->major = Major(major); // Constructed Major object twice!
        cout << "Student Object Constructed!" << endl;
    }   
};

class MatureStudent : Student
{
public:
    int age;

    MatureStudent(
        int age, 
        string name, 
        int start_year, 
        string major, 
        Minor &minor) : Student(name, 
                                start_year, 
                                major, 
                                minor), 
                        age(age) {}

};

int main()
{
   
    Minor minor("Economics");
    Student s1("John", 2004, "Computer Science", minor);

    cout << "Name: " << s1.name << endl;
    cout << "Start Year: " << s1.start_year << endl;
    cout << "Grad Year: " << s1.grad_year << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Major: " << s1.major.name << endl;
    // cout << "Minor: " << s1.minor.name << endl;
    cout << "Minor1: " << s1.minor1.name << endl;
    cout << "Minor2: " << s1.minor2.name << endl;

    return 0;

}