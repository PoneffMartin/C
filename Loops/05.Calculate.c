/* 
Write a program that, for a given two integer numbers n and x, calculates the sum S = 1 + 1!/x + 2!/x^2 + ... + n!/x^n .
Use only one loop. Print the result with 5 digits after the decimal point.
 */

#include <stdio.h>
#include <math.h>

int main()
{

    int n, x;
    unsigned long long factoriel=1;
    scanf("%d %d", &n, &x);
    double sum=1;
    for(int i=1; i<=n; i++)
    {
        factoriel *=i;
        sum+=factoriel/(double)(pow(x, i));
    }
    printf("%.5lf", sum);
    
    return 0;
}

