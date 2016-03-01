/* 
 Write a program that reads 3 real numbers from the console and prints their sum. 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number_1, number_2, number_3;
    double sum;
    scanf("%lf %lf %lf", &number_1, &number_2, &number_3);
    sum=number_1+number_2+number_3;
    printf("%.2lf", sum);

    return 0;
}

