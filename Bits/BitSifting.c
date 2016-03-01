#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long bitsToSieve;
    scanf("%llu", &bitsToSieve);
    int n;
    scanf("%d", &n);
    unsigned long long sieves[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%llu", &sieves[i]);
    }
    for(i=0; i<n; i++)
    {
        unsigned long long mask=~sieves[i];
        bitsToSieve&=mask;
    }
    size_t count=0;
    for(i=0; i<64; i++)
    {
        if((bitsToSieve>>i)&1)
        {
            count++;
        }
    }
    printf("%lu", count);
    return 0;
}

