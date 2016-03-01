/* 
Write a function that takes a string as input and replaces all occurrences of a digit (0-9) with a slash '/'.
The function should NOT modify the original string. It should return the resulting string as result. The function
should also notify the calling function how many digits were replaced. Find a way to do this using pointer
parameters.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 100

char *digitHate(char *array, int* ptr)
{   
    
    size_t size=strlen(array);
    char *resultArr=malloc(size);
    int i;
    for(i=0; i<size; i++)
    {
        if(array[i]>=48&&array[i]<=57)
        {
            resultArr[i]='/';
            (*ptr)++;
        }
        else
        {
            resultArr[i]=array[i];
        }            
    }
    return resultArr;
}

int main()
{
    char string[BUFFER];
    fgets(string, BUFFER, stdin);
    int numberOfDigitsReplaced=0;
    int *ptr=&numberOfDigitsReplaced;    
    char *resultArray=digitHate(string, ptr);
    printf("%s", resultArray);
    printf("Digits changed: %d", *ptr);
    free(resultArray);
    
    return 0;
}
