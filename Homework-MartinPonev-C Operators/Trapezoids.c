/* 
 Write an expression that calculates trapezoid's area by given sides a and b and height h.
 */

#include <stdio.h>

int main()
{
    float sideA;
    float sideB;
    float height;
    float area;
    
    scanf("%f", &sideA);
    scanf("%f", &sideB);
    scanf("%f", &height);
    
    area=(sideA+sideB)*height/2;
    
    printf("%.2f", area);
    
    return 0;
}

