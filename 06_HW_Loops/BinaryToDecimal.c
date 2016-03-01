/* 
Using loops write a program that converts a binary integer number to its decimal form. The input is entered as
string. The output should be a variable of type long. Do not use the built-in .NET functionality.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#define size sizeof(long)*8

int main()
{
    char numberInBinary[size];
    fgets(numberInBinary, size, stdin);
    int stringLength=strlen(numberInBinary)-1;
    long numberInDecimal=0;
    
    for(int i=stringLength, j=0;i>=1; i--, j++)
    {
        if(numberInBinary[i-1]=='0')
        {
            continue;
        }
        else
        {
            numberInDecimal += 1*pow(2, j);
        }
    }
    printf("%ld", numberInDecimal);
    
    return 0;
}

