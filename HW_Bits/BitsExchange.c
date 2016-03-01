/* 
Write a program that exchanges bits 3, 4 and 5 with bits 24, 25 and 26 of given 32-bit unsigned integer.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    scanf("%u", &number);
    unsigned int mask=7;
    unsigned int firstMask=(number>>3)&mask;
    unsigned int secondMask=(number>>24)&mask;
    number &=(~(mask<<24));
    number |=(firstMask<<24);
    number &=(~(mask<<3));
    number |=(secondMask<<3);
    printf("%u", number);
    
    return 0;
}

