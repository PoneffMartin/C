/* 
Write a function that returns the last digit of a given integer as an English word. Test the function with different
input values. Ensure you name the function properly. Declare a function prototype before defining the function.
 */

#include <stdio.h>

char *lastDigitAsWord(int integer);

char *lastDigitAsWord(int integer)
{
    int lastDigit=integer%10;
    switch(lastDigit)
    {
        case 0: 
            return "Zero";
            break;
        case 1: 
            return "One";
            break;
        case 2: 
            return "Two";
            break;
        case 3: 
            return "Three";
            break;
        case 4: 
            return "Four";
            break;
        case 5: 
            return "Five";
            break;
        case 6: 
            return "Six";
            break;
        case 7: 
            return "Zero";
            break;
        case 8: 
            return "Eight";
            break;                    
        default:
            return "Nine";            
    }
}

int main()
{
    
    int integer;
    scanf("%d", &integer);
    printf("%s", lastDigitAsWord(integer));
    
    return 0;
}

