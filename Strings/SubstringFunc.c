/* 
Implement a function which extracts a substring from a given string by specifying the position from which to extract
and the length to extract. The declaration could be as follows:
int substr(char * src, int position, int length);
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 50

int substr(char *src, int position, int length)
{
    int i;
    size_t srcLen=strlen(src);
    if(src[srcLen-1]=='\n')
    {
        src[srcLen-1]='\0';
        srcLen--;
    }
    if(position>(srcLen-1))
    {
        printf("(empty string)");
        return 0;
    }
    size_t end=position+length;
    for(i=position; i<end; i++)
    {
        printf("%c", src[i]);
    }
    return 1;
}

int main()
{
    char string[BUFFER];
    fgets(string, BUFFER, stdin);
    int result=substr(string, 3, 5);
    return 0;
}

