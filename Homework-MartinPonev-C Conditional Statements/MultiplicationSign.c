/* 
Write a program that shows the sign (+, - or 0) of the product of three real numbers, without calculating it. 
Use a sequence of if operators.
 */

#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    int counter=0;
    
    if((a==0||b==0||c==0))
    {
        printf("0");
    }
    else
    {
        if(a<0)
        {
            counter++;
        }
        if(b<0)
        {
            counter++;
        }
        if(c<0)
        {
            counter++;
        }
        switch(counter)
        {
            case 2:
            case 0:
                printf("+");
                break;
            default:
                printf("-");
                break;
        }
    }
    
    return 0;
}

