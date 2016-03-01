/* 
Write a function that reverses the digits of a given floating-point number. The function should receive a double
number string and a pointer to an integer variable. In case of format error, it should set error to 1 and in case of success
to 0. Declare a function prototype before defining the function.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double reverseNumber(char *number, int *error);

double reverseNumber(char *number, int *error)
{
    char *remainder;
    double result=strtod(number, &remainder);
    if(*remainder != 0)
    {
        *error=1;
        return 0;
    }
    else
    {    
        int lengthOfStr=strlen(number);
        int i, j;
        char reversedNumber[lengthOfStr+1];
        for(i=0, j=lengthOfStr-1; i<lengthOfStr; i++, j--)
        {
            reversedNumber[i]=number[j];
        }
        *error=0;
        result=strtod(reversedNumber, &remainder);
        return result;
    }
}

int main()
{
    int error;
    char number[10];
    fgets(number, 10, stdin);
    int size=strlen(number);
    if(number[size-1]=='\n')
    {
        number[size-1]='\0';
    }
        
    double result=reverseNumber(number, &error);
    if(error==1)
    {
        printf("Invalid format");
    }
    else
    {
        printf("%.3lf", result);
    }
    
    return 0;
}

