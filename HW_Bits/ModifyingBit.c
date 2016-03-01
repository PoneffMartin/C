/* 
We are given an integer number n, a bit value v (v=0 or 1) and a position p. Write a sequence of operators (a few
lines of C# code) that modifies n to hold the value v at the position p from the binary representation of n while
preserving all other bits in n.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, v, p;
    scanf("%d %d %d", &number, &p, &v);
    int mask=1<<p;
    if(!v)
    {
        number=~mask&number;
    }
    else
    {
        number=mask|number;
    }
    printf("%d", number);
    return 0;
}

