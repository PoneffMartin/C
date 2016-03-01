/* 
Write a program that sets the bit at position p to 0. Print the resulting number.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    int pos;
    scanf("%u %d", &number, &pos);
    int mask=1<<pos;
    number =number&(~mask);
    printf("%u", number);
    
    return 0;
}

