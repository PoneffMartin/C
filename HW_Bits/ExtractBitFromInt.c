/* 
Write an expression that extracts from given integer n the value of given bit at index p.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    int p;
    scanf("%u %d", &number, &p);
    int bit=(number>>p)&1;
    printf("%d", bit);
    return 0;
}

