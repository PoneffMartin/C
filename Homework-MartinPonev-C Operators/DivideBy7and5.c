/* 
Write a Boolean expression that checks for given integer if it can be divided (without remainder) by 7 and 5 in the
same time.
 */

#include <stdio.h>

int main()
{
    int integer;
    scanf("%d", &integer);
    
    int isDivided=integer%35==0;
    printf("%d", isDivided);    
    
    return 0;
}

