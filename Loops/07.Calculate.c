/* 
In combinatorics, the number of ways to choose k different members out of a group of n different elements (also
known as the number of combinations) is calculated by the following formula: n! / (k! * (n-k)!)
For example, there are 2598960 ways to withdraw 5 cards out of a standard deck of 52 cards. Your task is to write a
program that calculates n! / (k! * (n-k)!) for given n and k (1 < k < n < 100). Try to use only two loops.
 */

#include <stdio.h>

int main()
{

    printf("Enter n and k (1<k<n<100)\n");
    int n,k,result;
    unsigned long long factorielOfN=1;
    unsigned long long factorielOfK=1;
    scanf("%d %d", &n, &k);
    for(int i=(n-k)+1; i<=n; i++)
    {
        factorielOfN*=i;
    }
    for(int j=1; j<=k; j++)
    {
        factorielOfK*=j;
    }
    result=factorielOfN/factorielOfK;
    printf("%d", result);
    return 0;
}

