/* 
Write an expression that calculates rectangle’s perimeter and area by given width and height.
 */

#include <stdio.h>

int main()
{

    float height, width, area, perimeter;
    scanf("%f", &height);
    scanf("%f", &width);
    
    perimeter=2*(height+width);
    area=height*width;
    
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f", area);
    
    return 0;
}

