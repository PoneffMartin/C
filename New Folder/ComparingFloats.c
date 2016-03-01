/* 
Write a program that safely compares floating-point numbers (double) with precision eps = 0.000001. Note that
we cannot directly compare two floating-point numbers a and b by a==b because of the nature of the floating-point
arithmetic. Therefore, we assume two numbers are equal if they are more closely to each other than a fixed
constant eps. Examples:
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double eps=0.000001;
    double a;
    double b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    
   if(fabs(a-b)<eps)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    return 0;
}

