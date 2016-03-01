/* 
 Write a program that finds the biggest of five numbers by using only five if statements.
 */

#include <stdio.h>

int main()
{

    float a,b,c,d,e,max;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    if(max<d)
    {
        max=d;
    }
    if(max<e)
    {
        max=e;
    }
    printf("%.1f", max);
    
    
    return 0;
}

