/* 
Write a function that reads an entire line from the standard input stream (until end of line ('\n') or end of file (EOF)
and returns a pointer to the read string. The function should be able to read lines of unknown size.
The returned string's length should be equal to its allocated memory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INITIAL_BUFFER_SIZE 64


size_t read_line(char **line, size_t *size)
{
    char *result = *line;
    if (!result)
    {
        result = (char*) malloc(INITIAL_BUFFER_SIZE);
        if (!result)
            return 0;
    }
    
    size_t index = 0;
    size_t currentSize = INITIAL_BUFFER_SIZE;
    char ch = getchar();
    while (ch != '\n' && ch != EOF)
    {
        if (index == currentSize - 1)
        {
            char *resized = (char*) realloc(result, currentSize * 2);
            if (!resized)
                return 0;
            result = resized;
            currentSize *= 2;
        }
        result[index] = ch;
        index++;
        ch = getchar();
    }
    
    result[index] = '\0';
    *line = result;
    *size = currentSize;
    
    return index - 1;
}
int main()
{
    char *line;
    size_t size=0;
    read_line(&line, &size);
    if(line)
        printf("%s", line);
    free(line);
    
    return 0;
}

