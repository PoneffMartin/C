/* 
Write a program that reads a string from the console and replaces all series of consecutive identical letters with a
single one.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 30

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
    int i=0,j=0;
    while(i<length)
    {
        char ch=string[i];
        while(string[i]==ch)
        {
            i++;
        }
        string[j]=ch;
        j++;        
    }
    string[j]='\0';
    printf("%s", string);
    
    return 0;
}

