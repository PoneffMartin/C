/* 
 Write a program that reads a number n and prints on the console the first n members of the Fibonacci sequence (at
a single line, separated by spaces) : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, .... Note that you may need to learn
how to use loops.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int firstNumber=0;
    int secondNumber=1;
    int sum=0;
    int n;
    scanf("%d", &n);
    int i;
    printf("%d %d", firstNumber, secondNumber);
    for(i=0; i<n-2; i++)
    {
        sum=firstNumber+secondNumber;
        firstNumber=secondNumber;
        secondNumber=sum;
        printf(" %d", sum);
    }
    
    return 0;
}

