/* 
Write a program that takes as input two lists of names and removes from the first list all names given in the second
list. The input and output lists are given as words, separated by a space, each list at a separate line.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 100

int main()
{
    char *firstLine=NULL;
    char *secondLine=NULL;
    size_t firstSize=0;
    size_t secondSize=0;
    size_t firstLen=getline(&firstLine, &firstSize, stdin);
    size_t secondLen=getline(&secondLine, &secondSize, stdin);
    char *token=strtok(secondLine, " ");
    while(token)
    {
        size_t length=strlen(token);
        char *substr=strstr(firstLine, token);
        while(substr)
        {
            size_t index=substr-firstLine;
            memmove(&firstLine[index], &firstLine[index+length+1], firstLen-index);
            substr=strstr(firstLine, token);
        }
        token=strtok(NULL, " ");
    }
    
    printf("%s", firstLine);
    free(firstLine);
    free(secondLine);
    return 0;
}

