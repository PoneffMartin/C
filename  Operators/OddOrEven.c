/* 
Write an expression that checks if given integer is odd or even.
 */

#include <stdio.h>

int main()
{
    int integer;
    scanf("%d", &integer);
    
    if (integer%2!=0)
    {
        printf("1");
    }
    else
    {
        printf("0");   
    }
    
    return 0;
}

