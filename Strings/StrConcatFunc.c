/* 
The standard C function strncat(char *dest, const char *src, size_t n) concatenates the strings located in the src and
the dest buffer into the dest buffer. The variable n shows the length from the src string to be concatenated. Try
implementing that function yourself. Think about how you can get the length of the two strings.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 10

void strconc(char *dest, char *src, size_t n)
{
    size_t destLen=strlen(dest);   
    if(dest[destLen-1]=='\n')
    {
        dest[destLen-1]='\0';
        destLen--;
    }   
    size_t srcLen=strlen(src);
    if(src[srcLen-1]=='\n')
    {
        src[srcLen-1]='\0';
        srcLen--;
    }   
    int i, j;
    for(i=0, j=destLen; i<n; i++, j++)
    {
        dest[j]=src[i];
    }
    if(j<=BUFFER-1)
    {
        for(i=j; i<BUFFER; i++)
        {
            dest[j]='\0';
        }
    }
}

int main()
{
    char dest[BUFFER];
    fgets(dest, BUFFER, stdin);   
    char src[BUFFER];
    fgets(src, BUFFER, stdin);
    int n;
    scanf("%d", &n);
    printf("%s", dest);
    printf("%s", src);
    strconc(dest, src, n);
    printf("%s", dest);
    
    return 0;
}

