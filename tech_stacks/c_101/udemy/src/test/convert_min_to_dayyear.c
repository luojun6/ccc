#include <stdio.h>
#include <stdlib.h>

#define HOUR_MINUTE 60
#define DAY_HOURS 24
#define YEAR_DAYS 365

double convertMinToDays(int min);
double convertMinToYears(int min);

int main(int argc, char **argv)
{
    if (argc < 2) 
    {
        fprintf(stderr, "Usage: %s minutes\n", argv[0]);
        exit(1);
    }

    int min;
    sscanf(argv[1], "%d", &min);

    double day = convertMinToDays(min);
    double year = convertMinToYears(min);

    printf("Converted %d minutes to %f days and %f years.\n", min, day, year);

    return 0;
}

double convertMinToDays(int min)
{
    double day = (double)min / (DAY_HOURS * HOUR_MINUTE);

    return day;
}

double convertMinToYears(int min)
{
    double year = (double)min / (YEAR_DAYS * DAY_HOURS * HOUR_MINUTE);

    return year;
}