#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t n;
    size_t step;
    scanf("%lu", &n);
    scanf("%lu", &step);
    int i=0;
    size_t index=1;
    size_t bits=7;
    unsigned char pos=0;
    while(i<n)
    {
        size_t temp;
        scanf("%lu", &temp);
        unsigned char number=temp;
        while(index<=bits)
        {
            pos=bits-index;
            unsigned char mask=1<<pos;
            number|= mask;
            index+=step;
        }
        
        printf("%u\n", number);
        bits+=8;
        i++;
    }

    return 0;
}

