/* 
Write a program that takes a text and a string of banned words. All words included in the ban list should be
replaced with asterisks "*", equal to the word's length. The entries in the ban list will be separated by a comma and
space ", ".
The ban list should be entered on the first input line and the text on the second input line.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define BUFFER 50

int main()
{
    char banList[BUFFER];
    fgets(banList, BUFFER, stdin);
    banList[strlen(banList)-1]='\0';
    char *banWords[BUFFER];
    char *token=strtok(banList, ", ");
    int i=0;
    while(token!=NULL)
    {
        banWords[i]=token;
        token=strtok(NULL, ", ");
        i++;
    }
    size_t sizeOfBanWordsList=i;
    char *text=malloc(1000);
    size_t size=0;
    if(errno==12)
    {
        fprintf(stderr, "%s", strerror(errno));
        return 1;
    }
    getline(&text, &size, stdin); 
    char *currentWord=text;
    int k;
    for(i=0; i<sizeOfBanWordsList; i++)
    {
        currentWord=text;
        int j=0;
        while(j<size)
        {
            if((currentWord=strstr(currentWord, banWords[i]))!=NULL)
            {
                size_t length=strlen(banWords[i]);
                for(k=0; k<length; k++)
                {
                    *(currentWord+k)='*';
                }
                currentWord+=length;
                j+=length;
            }
            else
            {
                break;
            }
        }
    }
    printf("%s", text);
    free(text);
    return 0;
}

