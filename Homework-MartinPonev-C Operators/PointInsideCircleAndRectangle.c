/*
Write an expression that checks for given point (x, y) if it is within the circle K({1, 1}, 1.5)
and out of the rectangle R(top=1, left=-1, width=6, height=2). Print yes or no:
 */

#include <stdio.h>
#define radius 1.5


int main()
{

    float x;
    float y;
    scanf("%f", &x);
    scanf("%f", &y);
    
    int isOutside=!(x>=-1&&x<=5&&y<=1&&y>=-1);
       
    x-=1;
    y-=1;
    
    if(((x*x+y*y)<=radius*radius)&&isOutside)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
       
    return 0;
}

