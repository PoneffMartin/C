/* 
Write a program that enters 3 integers n, min and max (min ≤ max) and prints n random numbers in the range
[min...max].
 */

#include <stdio.h>
#include <time.h>

int main()
{

    int n, min, max, randomNumber;
    scanf("%d %d %d", &n, &min, &max);
    time_t currentTime;
    srand(time(&currentTime));
    for(int i=0; i<n; i++)
    {       
        randomNumber=(rand()%(max+1-min))+min;
        printf("%d ", randomNumber);
    }
    
    
    return 0;
}

