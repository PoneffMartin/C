/* 
 Write a program that reads an integer number n from the console and prints all the numbers in the interval [1..n],
each on a single line. Note that you may need to use a for-loop. Examples:
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

