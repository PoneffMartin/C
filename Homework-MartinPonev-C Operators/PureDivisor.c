/* 
 Write a program that prints if a number is divided by 9, 11 or 13 without remainder.
 */

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    if(number%9==0||number%11==0||number%13==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}

