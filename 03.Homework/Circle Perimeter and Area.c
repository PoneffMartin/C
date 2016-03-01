/* 
 Write a program that reads the radius r of a circle and prints its perimeter and area formatted with 2 digits after the
decimal point.
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359
int main()
{
    double radius;
    double perimeter, area;
    scanf("%lf", &radius);
    perimeter=2*PI*radius;
    area=PI*radius*radius;
    printf("Perimeter: %.2lf\n", perimeter);
    printf("Area: %.2lf", area);
    
    return 0;
}

