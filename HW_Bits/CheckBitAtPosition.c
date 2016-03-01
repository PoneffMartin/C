/* 
Write a Boolean expression that returns if the bit at position p (counting from 0, starting from the right) in given
integer number n has value of 1.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    int pos, isOne;
    scanf("%u %d", &number, &pos);
    isOne=(number>>pos)&1;
    printf(isOne? "true":"false");
    
    return 0;
}

