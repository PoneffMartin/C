/*Write a program that prints the first 10 members of the sequence: 2, -3, 4, -5, 6, -7, ...
Modify your program to read a number n from the console and then finds the first n members
from the sequence, starting from 2. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int i;
    int n;
    scanf("%d", &n);
    for( i=2; i<n+2; i++)
    {
        if((i)%2==0)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d ", -i);
        }
    }
    return 0;
}

