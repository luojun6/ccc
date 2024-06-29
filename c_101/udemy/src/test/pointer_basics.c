/*********************************************************
* Declare a structure and prints out it's content
*   - Create an employee structure with 3 members
*       - name (character array)
*       - hireDate (int)
*       - salary (float)
*
*   - Declare and initialize an instance of an employee type
*
*   - Read in a second employee from the console and store 
*     it in a structure of type employee
*
*   - Print out the contents of each employee
*********************************************************/

#include <stdio.h>

struct Employee
{
    char name[20];
    int hireDate;
    float salary;
};

int main()
{

    struct Employee employee = { "JunLuo", 66, 5.3};
    struct Employee newEmployee;
    {
        /* data */
    };
    

    
    printf("Please enter the new employee information.\n");
    printf("Name: ");
    scanf("%s", newEmployee.name);
    printf("Hired Date: ");
    scanf("%d", &newEmployee.hireDate);
    printf("Salary: ");
    scanf("%f", &newEmployee.salary);

    printf("Name: %s, hired Date: %d, Salary: %f\n", 
        employee.name, 
        employee.hireDate, 
        employee.salary);

    printf("Name: %s, hired Date: %d, Salary: %f\n", 
        newEmployee.name, 
        newEmployee.hireDate, 
        newEmployee.salary);

    return 0;
}
