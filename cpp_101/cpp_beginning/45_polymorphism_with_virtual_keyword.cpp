#include <iostream>

using namespace std;

class Student
{
public:
    string name;

    Student(string name) : name(name) {}

    virtual void print() { cout << name << endl; }

};

class MedicalStudent : public Student
{
public:
    string speciality;

    MedicalStudent(string name, string speciality): 
    speciality(speciality), Student(name) {};

    void print() { cout << name << ": " << speciality << endl; }

};

int main()
{
    Student *students[] = {
        new Student("Keven"),
        new Student("Mary"),
        new Student("Kulvinder"),
        new MedicalStudent("Keven", "Family Medicine"),
        new MedicalStudent("Mary", "Pediatrics"),
        new MedicalStudent("Kulvinder", "Radiology")
    };

    for (int i = 0; i < 6; i++)
        students[i]->print();

    for (int i = 0; i < 6; i++)
        delete students[i];


    // MedicalStudent *medical_students[] = {
    //     new MedicalStudent("Keven", "Family Medicine"),
    //     new MedicalStudent("Mary", "Pediatrics"),
    //     new MedicalStudent("Kulvinder", "Radiology")
    // };

    // for (int i = 0; i < 3; i++)
    //     medical_students[i]->print();

    // for (int i = 0; i < 3; i++)
    //     delete medical_students[i];

    return 0;
}