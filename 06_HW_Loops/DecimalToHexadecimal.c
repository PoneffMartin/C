/* 
Using loops write a program that converts an integer number to its hexadecimal representation. The input is
entered as long. The output should be a variable of type string. Do not use the built-in .NET functionality.
 */

#include <stdio.h>

int main()
{
    
    unsigned long long integer;
    scanf("%llu", &integer);
    char ints[10]={'0','1','2','3','4','5','6','7','8','9'};
    int count=0;
    unsigned long long integerMask=integer;
    //Check how many times integer is divisible by 16 before it gets 0
    do
    {
        integerMask /=16;
        count++;
    }
    while(integerMask!=0);
    
    char hexadecimal[count+1];
    int i;
    for(i=0; i<count; i++)
    {
        int remainder=integer%16;
        switch(remainder)
        {
            case 10:
                hexadecimal[count-1-i]='A';
                break;
            case 11:
                hexadecimal[count-1-i]='B';
                break;
            case 12:
                hexadecimal[count-1-i]='C';
                break;
            case 13:
                hexadecimal[count-1-i]='D';
                break;
            case 14:
                hexadecimal[count-1-i]='E';
                break;
            case 15:
                hexadecimal[count-1-i]='F';
                break;
            default:
                hexadecimal[count-1-i]=ints[remainder];
        }
        integer /=16;
    }
        hexadecimal[i]='\0';
        printf("%s", hexadecimal);   
    return 0;
}

