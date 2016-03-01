/* 
 Write a program that takes as input a four-digit number in format abcd (e.g. 2011) and performs the following:
Calculates the sum of the digits (in our example 2+0+1+1 = 4).
Prints on the console the number in reversed order: dcba (in our example 1102).
Puts the last digit in the first position: dabc (in our example 1201).
Exchanges the second and the third digits: acbd (in our example 2101).
The number has always exactly 4 digits and cannot start with 0.
 */

#include <stdio.h>

int main()
{
    int fourDigitNumber;
    int sumOfDigits;
    int ones, tens, hundreds, thousands;
    scanf("%d", &fourDigitNumber);
    ones=fourDigitNumber%10;
    tens=(fourDigitNumber/10)%10;
    hundreds=(fourDigitNumber/100)%10;
    thousands=fourDigitNumber/1000;
    
    //Calculates the sum
    sumOfDigits=ones+tens+hundreds+thousands;
    printf("%d\n", sumOfDigits);
    
    //Prints the number in reversed order  
    fourDigitNumber=ones*1000+tens*100+hundreds*10+thousands*1;
    printf("%d\n", fourDigitNumber);
    
    //Puts the last digit in the first position
    fourDigitNumber=ones*1000+thousands*100+hundreds*10+tens*1;
    printf("%d\n", fourDigitNumber);
    
    
    //Exchanges second and third digits
    tens=tens+hundreds;
    hundreds=tens-hundreds;
    tens=tens-hundreds;
    
    fourDigitNumber=thousands*1000+hundreds*100+tens*10+ones*1;
    printf("%d", fourDigitNumber);
    
    return 0;
}

