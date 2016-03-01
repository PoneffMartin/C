/* 
In combinatorics, the Catalan numbers are calculated by the following formula: (2n)!/(n+1)!*n!
Write a program to calculate the n th Catalan number by given n (1 < n < 100).
 */

#include <stdio.h>

int main()
{
    printf("Enter a number (1<n<100)\n");
    int number;
    scanf("%d", &number);
    unsigned long long factorielOf2N=1;
    unsigned long long factorielOfN=1;
    int catalanN;
    
    for(int i=number+2; i<=2*number; i++)
    {
        factorielOf2N*=i;
    }
    for(int j=1; j<=number; j++)
    {
        factorielOfN*=j;
    }
    
    catalanN=factorielOf2N/factorielOfN;
    
    printf("%d", catalanN);
    
    return 0;
}

