/* 
Write a program that enters 3 real numbers and prints them sorted in descending order. Use nested if statements.
Don’t use arrays and the built-in sorting functionality.
 */

#include <stdio.h>

int main()
{

    float a,b,c,tmp;
    scanf("%f %f %f", &a, &b, &c);
        
    if(a<b)
    {
        tmp=b;
        b=a;
        a=tmp;
    }
    if(a<c)
    {
        tmp=c;
        c=a;
        a=tmp;
    }
    if(b<c)
    {
        tmp=c;
        c=b;
        b=tmp;
        
    }
    
    printf("%.1f %.1f %.1f", a,b,c);
    
    return 0;
}

