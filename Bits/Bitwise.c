/* 
Using bitwise operators, write an expression for finding the value of the bit #3 of a given unsigned integer. The bits
are counted from right to left, starting from bit #0. The result of the expression should be either 1 or 0.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    scanf("%u", &number);
    unsigned int bit=(number>>3)&1;
    printf("%u", bit);
    
    return 0;
}

