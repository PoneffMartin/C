/* 
 Write a program that finds the biggest of three numbers.
 */

#include <stdio.h>

int main()
{
    int i;
    float a, b, c, max;       
    scanf("%f %f %f", &a, &b, &c);     
    max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    
    printf("%.1f", max);
    
    return 0;
}

