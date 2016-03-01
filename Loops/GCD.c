/* 
Write a program that calculates the greatest common divisor (GCD) of given two integers a and b. Use the
Euclidean algorithm (find it in Internet).
 */

#include <stdio.h>

int main()
{
    
    int a, b;
    scanf("%d %d", &a, &b);
    int remainder;
    while(remainder!=0)
    {
        remainder=a%b;
        a=b;
        b=remainder;
    }
    printf("GCD=%d", a);
    
    return 0;
}

