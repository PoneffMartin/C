/* 
Write a program to find the longest word in a text.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    char *text=NULL;
    char *maxWord=NULL;
    size_t size=0;
    size_t length=getline(&text, &size, stdin);
    char *token=strtok(text, " .,!?");    
    size_t index=0;
    size_t max=0;
    while(token)
    {
        size_t lengthOfStr=strlen(token);     
        index +=lengthOfStr;
        if(lengthOfStr>max)
        {
            maxWord=token;
            max=lengthOfStr;
        }
        token=strtok(NULL, " .,!?");
    }
    printf("%s", maxWord);
    free(text);
    return (EXIT_SUCCESS);
}

