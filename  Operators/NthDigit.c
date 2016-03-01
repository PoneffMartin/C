/* 
Write a program that prints the n-th digit of a number (from right to left). If no such digit exists, print a dash "-".
Hint: You need to learn how to use a while-loop.
 */
//To run the program you should add "-lm" as option!!!

#include <stdio.h>
#include <math.h>

int main()
{

    int number, n, digit;
    scanf("%d", &number);
    scanf("%d", &n);
   
    if(number<pow(10,(n-1)))
    {
        printf("-");
    }
    else
    {
        while(n!=0&&number!=0)
        {
            digit=number%10;
            number /=10;
            n--;            
        }
        printf("%d", digit);
    }    
     
    return 0;
}

