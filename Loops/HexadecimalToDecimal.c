/* 
Using loops write a program that converts a hexadecimal integer number to its decimal form. The input is entered as
string. The output should be a variable of type long. Do not use the built-in .NET functionality.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char hexadecimal[32];
    fgets(hexadecimal, 32, stdin);
    long decimal=0;
    int hexStrLength=strlen(hexadecimal)-1;
    int i;
    int powerSixteen=1;
    
    for(i=hexStrLength-1; i>=0; i--)
    {
        int num;
        switch(hexadecimal[i])
        {
            case 'A':
                num=10;
                break;
            case 'B':
                num=11;
                break;
            case 'C':
                num=12;
                break;
            case 'D':
                num=13;
                break;
            case 'E':
                num=14;
                break;
            case 'F':
                num=15;
                break;
            default:
                num=hexadecimal[i]-48;
                                                                
        }     
        decimal +=num*powerSixteen;
                powerSixteen *=16;
    }
    printf("%ld", decimal);   
    
    return 0;
}

