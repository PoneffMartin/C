/* 
Write a program that finds the average of the sum of 3 numbers.
 */

#include <stdio.h>

int main()
{
    float a,b,c, average;
    scanf("%f %f %f", &a, &b, &c);
    
    average=(a+b+c)/3;
    printf("%.5f", average);
    
    return 0;
}

