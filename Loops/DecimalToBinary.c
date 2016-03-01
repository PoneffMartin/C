/* 
Using loops write a program that converts an integer number to its binary representation. The input is entered as
long. The output should be a variable of type string. Do not use the built-in .NET functionality.
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    long integer;
    scanf("%ld", &integer);    
    int bits=integer;
    int i;
    int count=0;
    
    //Check how many times integer is divisible by 2 before it gets 0    
    do
    {        
        bits /= 2;   
        count++;
    }
    while(bits!=0);
    
    char integerInBinary[count+1];     
    for(i=0; i<count; i++ )
    {   
        int mask=integer>>(count-1)-i;
        if(mask&1!=0)
        {
           integerInBinary[i]='1';
        }
        else
        {
           integerInBinary[i]='0';
        }
        
    }
    integerInBinary[i]='\0';
   
    printf("%s", integerInBinary);   
                       
    return 0;

}

