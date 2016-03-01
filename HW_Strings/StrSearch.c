/* 
Implement a function which checks whether a string appears as a substring in another string. It should return 1 if the
string occurs and 0 if it does not. Its declaration could be:
int strsearch(char * src, char * substr); 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 50

int strsearch(char *src, char *substr)
{
    int isFound=0;
    size_t sizeOfSrc=strlen(src);
    if(src[sizeOfSrc-1]=='\n')
    {
        src[sizeOfSrc-1]='\0';
        sizeOfSrc--;
    }
    size_t sizeOfSub=strlen(substr);
    if(substr[sizeOfSub-1]=='\n')
    {
        src[sizeOfSub-1]='\0';
        sizeOfSub--;
    }
    int i=0, j=0;
    while(j<sizeOfSub&&i<sizeOfSrc)
    {
        isFound=0;
        if(src[i]==substr[j])
        {
            j++;
            isFound=1;
        }
        else
        {
            j=0;
        }
        i++;
    }
    if(isFound)
    {
        return isFound;
    }
    return isFound;
}

int main()
{

    char text[BUFFER];
    fgets(text, BUFFER, stdin);
    char substr[BUFFER];
    fgets(substr, BUFFER, stdin);
    int isFound=strsearch(text, substr);
    printf("%d", isFound);
    return 0;
}

