#include <iostream>

using namespace std;

class Student
{
public:
    string name;

    void print()
    {
        cout << name << endl;
    }

    Student(string name) : name(name) {}
};

int main()
{
    int x = 4;

    int *ptr_to_int = new int(5);

    // *ptr_to_int = 5;

    cout << "ptr_to_int: " << ptr_to_int << endl;
    cout << "*ptr_to_int: " << *ptr_to_int << endl;

    // ptr_to_int = new int(10); // memory leak

    double *array = new double[4];
    array[0] = 5;
    array[1] = 6;
    array[2] = 7;
    array[3] = 8;

    for (int i = 0; i < 4; i++)
        cout << "array[" << i << "]: " << array[i] << endl;

    delete[] array;
    delete ptr_to_int;


    // Student *student = new Student;
    Student *student = new Student("Frank");
    (*student).name = "John";
    (*student).print();

    student->name = "Mary";
    student->print();

    delete student;

    // malloc() calloc() free()

    try
    {
        double *big_array = new double[99999999999999999];  
    }
    catch(const bad_alloc& e)  
    {
        cout << "bad_alloc caught: " << e.what() << endl;
    }
    
    double *big_again = new(nothrow) double[9999999999999999];

    if (big_again == NULL)
        cout << "Failed to allocate again!" << endl;

    double *mydouble = new double(12.2);
    double *specific = new(mydouble) double(20.5);

    return 0;
}


// STACK
// -----

//                 Memory
// Variable        Address         Value

// x               0x0001          4
// ptr_to_int      0x0002          0x9901 -> 0x9902
//                 ...
//                 ...
//                 ...
// HEAP            ...
// ----            ...    
//                 0x9901          5 (memory leak)
//                 0x9902          10
//                 0x9903