/* 
Write a recursive string reverse function. The function should accept a source string and destination string as
arguments. Do not use loops.
 */

#include <stdio.h>
#include <string.h>
#define BUFFER 50

void reverseArray(char *, char *, int, int);

void reverseArray(char *array, char *reversedArray, int start, int end)
{     
    if(end>=0)
    {
        reversedArray[start]=array[end];
        reverseArray(array, reversedArray, ++start, --end);    
    }   
}

int main()
{
    char array[BUFFER];
    fgets(array, BUFFER, stdin);
    int arrayLength=strlen(array)-2;
    char reversedArray[arrayLength+2];
    reverseArray(array, reversedArray, 0, arrayLength);
    reversedArray[arrayLength+1]='\0';
    printf("%s", reversedArray);
    return 0;
}

