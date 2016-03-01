/* 
The standard C function size_t strlen(const char *s) returns the size of the input string. Try implementing
it yourself. Think about how strings are represented in C in order to calculate their length.
 */

#include <stdio.h>
#include <stdlib.h>
#define BUFFER 50

size_t strLen(const char* string)
{
    int i=0, length=0;
    while(string[i]!='\n'&&string[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char string[BUFFER];
    fgets(string, BUFFER, stdin);
    size_t length=strLen(string);
    printf("%lu", length);
    return 0;
}

