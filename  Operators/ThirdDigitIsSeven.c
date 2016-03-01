/* 
Write an expression that checks for given integer if its third digit from right-to-left is 7. Print true or false:
 */

#include <stdio.h>

int main()
{

    int integer;
    scanf("%d", &integer);
    
    if(integer<99)
    {
        printf("Enter at least three digit number");
        scanf("%d", &integer);
    }
    else if((integer/100)%10==7)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    return 0;
}

