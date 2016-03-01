/* 
The standard C function strncpy(char *dest, const char *src, size_t n) copies a chunk from the src string to the
dest buffer. Try implementing that function manually. Try doing it without a buffer, by returning a string created in the body of
the function. Does it work? Think why it does or it doesn't. How can you modify it to work/break it.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 50

char *strcopy(char *dest, char *src, size_t n)
{
    dest=malloc(n+1);
    if(!dest)
    {
        return NULL;
    }
    int i;
    for(i=0; i<n; i++)
    {
        dest[i]=src[i];
    }
    dest[i]='\0';
    
    return dest;
}

int main()
{
    char array[BUFFER];
    fgets(array, BUFFER, stdin);
    size_t length=strlen(array); 
    if(array[length-1]=='\n')
    {
        array[length-1]='\0';
        length--;
    }
    char *destArr;
    destArr=strcopy(destArr, array, length);
    printf("%s", destArr);
    free(destArr);
    return 0;
}

