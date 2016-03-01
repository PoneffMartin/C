/* 
Write a program that prints the bit at position 1 of a number.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);
    int bit=(number>>1)&1;
    printf("%d", bit);
    return 0;
}

