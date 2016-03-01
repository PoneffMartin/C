/* 
Write a program that reads from the console a positive integer number n (1 ≤ n ≤ 20) and prints a matrix like in the
examples below. Use two nested loops.
 */

#include <stdio.h>

int main()
{
    printf("Enter a positive number: ");
    int number;
    scanf("%d", &number);
    
    for(int i=0; i<number; i++)
    {
        for(int j=i+1; j<=number+i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}

