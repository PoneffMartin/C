/* 
Write a program that reads from the console a string of maximum 20 characters. If the length of the string is less
than 20, the rest of the characters should be filled with asterisks '*'. Print the resulting string on the console.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 20

int main()
{
    char string[BUFFER];
    fgets(string, BUFFER, stdin);
    size_t length=strlen(string);
    if(string[length-1]=='\n')
    {
        string[length-1]='\0';
        length--;
    }
    if(length<BUFFER)
    {
        int i;
        for(i=length; i<BUFFER; i++)
        {
            string[i]='*';
        }
        string[i]='\n';
    }
    printf("%s", string);
    return 0;
}

