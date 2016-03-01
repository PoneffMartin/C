/* 
Write a program that reads two positive integer numbers and prints how many numbers p exist between them such
that the reminder of the division by 5 is 0.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int firstNumber, secondNumber;
    int p=0;
    int i;
    
    scanf("%d", &firstNumber);
    scanf("%d", &secondNumber);
    
    for(i=firstNumber; i<=secondNumber; i++)
    {
        if(i%5==0)
        {
            p++;
        }
        
    }    
    printf("%d", p);
    
    return 0;
}

