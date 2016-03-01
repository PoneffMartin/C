/* 
Write an expression that checks if given positive integer number n (n ≤ 100)
is prime (i.e. it is divisible without remainder only to itself and 1).
Print true or false:
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int integer;
    int i;
    int isPrime=0;
    scanf("%d", &integer);
    //Check if integer is less than 100
    if(integer>100)
    {
        printf("Enter an integer less than 100\n");
        scanf("%d", &integer);
    }
    if(integer==1||integer<=0)
    {
        isPrime=0;
    }
    else 
    {
        isPrime=1;
        int i;
        for(i=2; i<=sqrt(integer); i++)
        {
            if(integer%i==0)
            {
                isPrime=0;
                break;
            }
        }      
    }
    printf("%s", isPrime? "true":"false");
    
    return 0;
}

