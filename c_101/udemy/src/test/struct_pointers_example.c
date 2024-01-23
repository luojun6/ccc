#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2024;

    print("Today's date is %i/%i/%2i.\n", datePtr->month, datePtr);

    return 0;
}