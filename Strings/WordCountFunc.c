/* 
Implement a function which counts the words in a given input. The function accepts as parameter the input from
which to count the words and the delimiter separating the words. The declaration could be as follows:
int wc(char * input, char delimiter);
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 100

int wc(char *input, char delimiter);

int wc(char *input, char delimeter)
{
    int count=1;
    size_t length=strlen(input);
    if(input[length-1]=='\n')
    {
        input[length-1]='\0';
        length--;
    }
    int i=0;
    for(i=0; i<length; i++)
    {
        if(input[i]==delimeter)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char input[BUFFER];
    fgets(input, BUFFER, stdin);
    int count=wc(input, '!');
    printf("%d", count);
    return 0;
}

