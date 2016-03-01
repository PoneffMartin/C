/* 
The gravitational field of the Moon is approximately 17% of that on the Earth. Write a program that calculates
the weight of a man on the moon by a given weight on the Earth.
 */

#include <stdio.h>

int main()
{
    float weight, weightOnMoon;
    scanf("%f", &weight);
    
    weightOnMoon=weight*0.17;
    printf("%.3f", weightOnMoon);        
            
    return 0;
}

