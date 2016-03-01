/* 
Write a program that enters from the console a positive integer n and prints all the numbers from 1 to n, on a single
line, separated by a space.
 */

#include <stdio.h>

int main()
{

    int n;
    int count=1;
    printf("Enter positive integer: ");
    scanf("%d", &n);
    
    while(count<=n)
    {
        printf("%d ", count);
        count++;
    }
    
    
    return 0;
}

