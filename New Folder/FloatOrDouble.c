/*Which of the following values can be assigned to a variable of type float and which to a variable of type double:
34.567839023, 12.345, 8923.1234857, 3456.091? Write a program to assign the numbers in variables and
print them to ensure no precision is lost.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number_1=12.345;
    float number_2=3456.091;
    double number_3=34.567839023;
    double number_4=8923.1234857;    
    
    printf("%.3f\n", number_1);
    printf("%.3f\n", number_2);
    printf("%.9lf\n", number_3);
    printf("%.7lf", number_4);
    
    
    return 0;
}
