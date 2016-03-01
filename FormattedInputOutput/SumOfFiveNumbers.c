/*
Write a program that enters 5 numbers (given in a single line, separated by a space), calculates and prints their
sum.
 */
#include <stdio.h>
#include <stdlib.h>


int main() 
{
    double a,b,c,d,e;
    double sum;
    scanf("%lf %lf %lf %lf %lf", &a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("%.2lf", sum);

    return 0;
}

