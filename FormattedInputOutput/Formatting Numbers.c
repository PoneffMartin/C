/* 
 Write a program that reads 3 numbers: an integer a (0 ≤ a ≤ 500), a floating-point b and a floating-point c and prints
them in 4 virtual columns on the console. Each column should have a width of 10 characters. The number a should
be printed in hexadecimal, left aligned; then the number a should be printed in binary form, padded with zeroes,
then the number b should be printed with 2 digits after the decimal point, right aligned; the number c should be
printed with 3 digits after the decimal point, left aligned. Examples:
 */

#include <stdio.h>
#include <stdlib.h>

#define format "|%-10X|%s|%10.2lf|%-10.3lf|"
int main()
{
    int i;
    int mask;
    char binary[11];
    int number_a;
    scanf("%d", &number_a);
    double number_b, number_c;
    scanf("%lf", &number_b);
    scanf("%lf", &number_c);
   
    for (i = 0; i < 10; i++)
    {
       mask = number_a >> 9-i;
     
       if (mask & 1)
       {
          binary[i]='1';
       }
       else
       {
          binary[i]='0';
       }
    }
    binary[10]=0;
    printf(format, number_a, binary, number_b, number_c);
    
    return 0;
}



 

