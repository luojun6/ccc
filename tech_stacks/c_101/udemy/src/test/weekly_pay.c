#include <stdio.h>

#define BASIC_PAY_RATE 12.00
#define STANDARD_WEEK_HOURS 40.0
#define OVERTIME_RATE 1.5
#define TAX_FIRST_LEVEL 300.0
#define TAX_FIRST_LEVEL_RATE 0.15
#define TAX_SECOND_LEVEL (TAX_FIRST_LEVEL + 150.0)
#define TAX_SECOND_LEVEL_RATE 0.20
#define TAX_THIRD_LEVEL_RATE 0.25


void display_weekly_pay()
{
    int hours;
    double grossPay, taxes, netPay;

    printf("Enter the number of hours worked this week: ");
    scanf("%d", &hours);

    if (hours <= 40)
        grossPay = (double)hours * BASIC_PAY_RATE;
    else
        grossPay = 40.0 * BASIC_PAY_RATE + (double)(hours - 40) * BASIC_PAY_RATE * OVERTIME_RATE;

    if (grossPay <= TAX_FIRST_LEVEL)
        taxes = grossPay * TAX_FIRST_LEVEL_RATE;
    else if ((grossPay > TAX_FIRST_LEVEL) & (grossPay <= TAX_SECOND_LEVEL))
        taxes = TAX_FIRST_LEVEL * TAX_FIRST_LEVEL_RATE + (grossPay - TAX_FIRST_LEVEL) * TAX_SECOND_LEVEL_RATE;
    else 
        taxes = TAX_FIRST_LEVEL * TAX_FIRST_LEVEL_RATE + 
        TAX_SECOND_LEVEL * TAX_SECOND_LEVEL_RATE + 
        (grossPay - TAX_FIRST_LEVEL - TAX_SECOND_LEVEL) * TAX_THIRD_LEVEL_RATE;

    netPay = grossPay - taxes;

    printf("Gross pay: %.2f\n", grossPay);
    printf("Taxes: %.2f\n", taxes);;
    printf("Net pay: %.2f\n", netPay);
}


int main(int argc, char **argv)
{
    display_weekly_pay();
    return 0;
}


