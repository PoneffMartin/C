/*
 Write a program that reads a string from the console, 
 reverses it and prints the result back at the console.
 */

#include <stdio.h>
#include <string.h>
#define BUFFER 50

int main()
{
    char string[BUFFER];
    fgets(string, BUFFER, stdin);
    int i, j;
    size_t length=strlen(string);
    if(string[length-1]=='\n')
    {
        string[length-1]='\0';
        length--;
    }
    char newChar[length+1];
    for(i=0, j=length-1; i<length; i++, j--)
    {
        newChar[i]=string[j];
    }
    newChar[i]='\0';
    printf("%s", newChar);
    return 0;
}

