/****************************************************************************
* Create an employee structure with 3 members
*   - name
*   - hireDate (int)
*   - salary (float)
*
* Declare and initalize an instance of an employee type
*
* Read in a second employee from the console ans store it in a structure of type employee
*
* Print out the contents of each employee
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct employee {
    char name[30];
    char date[15];
    float salary;
};

int main(int argc, char **argv)
{

    /*declare and initialization of structure variable*/
    struct employee emp={"Mike", "7/16/15", 76909.00f};

    printf("\n Name: %s ", emp.name);
    printf("\n Id: %s ", emp.date);
    printf("\n Salary: %.2f\n", emp.salary);

    printf("\nEnter employee information: \n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("\nHire Date: ");
    scanf("%s", emp.date);
    printf("\nSalary: ");
    scanf("%f", &emp.salary);

    printf("\n Name: %s ", emp.name);
    printf("\n Id: %s ", emp.date);
    printf("\n Salary: %.2f\n", emp.salary);

    return 0;
}