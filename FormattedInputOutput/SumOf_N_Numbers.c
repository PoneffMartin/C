/* 
 Write a program that enters a number n and after that enters more n numbers and calculates and prints their sum.
Note that you may need to use a for-loop.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    double number;
    scanf("%d", &n);
    double sum=0;
    for(i=0; i<n; i++)
    {
       scanf("%lf", &number);
       sum+=number;
    }
    printf("%.1lf", sum);
    
    return 0;
}

