/* 
Write an if-statement that takes two integer variables a and b and exchanges their values if the first one is greater
than the second one. As a result print the values a and b, separated by a space.
 */

#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    
    printf("%d %d", a, b);
    
    return 0;
}

