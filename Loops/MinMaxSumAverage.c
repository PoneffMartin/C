/* 
Write a program that reads from the console a sequence of n integer numbers and returns the minimal, the
maximal number, the sum and the average of all numbers (displayed with 2 digits after the decimal point). The
input starts by the number n (alone in a line) followed by n lines, each holding an integer number. The output is like
in the examples below.
 */

#include <stdio.h>
#include <limits.h>

int main()
{

    int n, integer;
    int count=1;
    double max=INT_MIN;
    double min=INT_MAX;
    double sum=0;
    double average;
    
    scanf("%d", &n);
    
    while(count<=n)
    {
        scanf("%d", &integer);
        sum+=integer;
        if(integer>=max)
        {
            max=integer;
        }
        if(integer<min)
        {
            min=integer;
        }
      
        count++;
    }
    average=(double)sum/n;
    printf("min: %.2lf\n", min);
    printf("max: %.2lf\n", max);
    printf("sum: %.2lf\n", sum);
    printf("avg: %.2lf\n", average);
    
    return 0;
}

