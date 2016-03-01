/* 
Write a program that calculates n! / k! for given n and k (1 < k < n < 100). Use only one loop.
 */

#include <stdio.h>

int main()
{
    printf("Enter n and k (1<k<n<100)\n");
    int n, k;
    unsigned long long factoriel=1;
    unsigned long long result;
    scanf("%d %d", &n, &k);
    
    for(int i=k+1; i<=n; i++)
    {
        factoriel *=i;
    }
    printf("%llu", factoriel);
       
    return 0;
}

