/*Create a console application that calculates and prints the square root of the number 12345. 
Modify your program to read the number from the console. Use the scanf() function. 
In order to run the modified program you should add a linker -lm.*/

#include <math.h>    
#include <stdio.h>    

int main(void)    
{      
    double d;
    scanf("%lf", &d);
    
    double sq=sqrt(d);
    printf("%lf", sq);
    
    return 0;
} 
