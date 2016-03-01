/* 
Write a program to find how many times a given string appears in a given text as substring. The text is given at the
first input line. The search string is given at the second input line. The output is an integer number. Please ignore the
character casing. Overlapping between occurrences is allowed.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define BUFFER 50

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
    char subStr[BUFFER];
    fgets(subStr, BUFFER, stdin);
    size_t sizeOfSub=strlen(subStr);
    if(subStr[sizeOfSub-1]=='\n')        
    {
        subStr[sizeOfSub-1]='\0';
        sizeOfSub--;
    }
    int count=0, i=0;
    for(i=0; i<length; i++)
    {
        string[i]=tolower(string[i]);
    }    
    char *p=string;
    i=0;
    while(i<length)
    {           
        if((p=strstr(p, subStr))!=NULL)
        {
            i++;
            p++;
            count++;
            continue;
        }           
        break;                            
    }
    printf("%d", count);
    
    return 0;
}

