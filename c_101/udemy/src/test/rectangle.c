#include <stdio.h>
#include <stdlib.h>

double calculatePerimeter(double height, double width);
double calculateArea(double height, double width);

int main(int argc, char **argv)
{
    if (argc < 3) 
    {
        fprintf(stderr, "Usage: %s height width\n", argv[0]);
        exit(1);
    }

    double height, width;
    // double perimeter = 0.0;
    // double area = 0.0;

    sscanf(argv[1], "%lf", &height);
    sscanf(argv[2], "%lf", &width);

    double perimeter = calculatePerimeter(height, width);
    double area = calculateArea(height, width);

    printf("Perimeter = 2.0 * (%f + %f) = %f\n", height, width, perimeter);
    printf("Area = %f * %f = %f\n", height, width, area);

    return 0;
}

double calculatePerimeter(double height, double width)
{
    return 2.0 * (height + width);
}

double calculateArea(double height, double width)
{
    return height * width;
}