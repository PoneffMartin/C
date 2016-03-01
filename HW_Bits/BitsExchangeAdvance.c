/* 
Write a program that exchanges bits {p, p+1, ..., p+k-1} with bits {q, q+1, ..., q+k-1} of a given 32-bit unsigned
integer. The first and the second sequence of bits may not overlap.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number, p, q, k;
    scanf("%d %d %d %d", &number, &p, &q, &k);
    unsigned int mask=(1<<k)-1;
    unsigned int firstPos=p;
    unsigned int secondPos=q;
    if(firstPos+k>=32)
    {
        printf("out of range");
    }
    else if(firstPos+k>=secondPos)
    {
        printf("overlapping");
    }
    else
    {
        unsigned int firstSet=(number>>p)&mask;
        unsigned int secondSet=(number>>q)&mask;
        number &= (~(mask<<secondPos));
        number |=(firstSet<<secondPos);
        number &= (~(mask<<firstPos));
        number |=(secondSet<<firstPos);
        printf("%u", number);
    }
    
    return 0;
}

