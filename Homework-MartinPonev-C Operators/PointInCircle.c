/* 
 Write an expression that checks if given point (x, y)
 is inside a circle K({0, 0}, 2).
 */

#include <stdio.h>
#include <math.h>
#define radius 2

int main()
{
    float x;
    float y;
    scanf("%f", &x);
    scanf("%f", &y);
    
    if((x*x+y*y)<=radius*radius)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

