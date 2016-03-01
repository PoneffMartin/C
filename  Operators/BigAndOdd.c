/* 
Write a program that that prints if the number is both greater than 20 and odd.
 */

#include <stdio.h>

int main()
{

    int number;
    scanf("%d", &number);
    
    if(number>20&&number%2!=0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}

