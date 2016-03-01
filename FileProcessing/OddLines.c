/* 
Write a program that reads a text file and prints on the console its odd lines.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define BUFFER 4096

void kill(const char*);

int main(int argc, char** argv) 
{
    if(argc<2)
        kill("Usage: ./prog <src.txt>");
    FILE *file=fopen(argv[1], "r");
    if(!file)
        kill(NULL);
    char *buffer=NULL;
    size_t size=0;
    int i=0;
    while(1)
    {
        ssize_t readBytes=getline(&buffer, &size, file);
        if(feof(file)&&readBytes<=0)
            break;
        if(i%2!=0)
        {
        printf("%s", buffer);
        }
        i++;
    }
    fclose(file);
    return 0;
}

void kill(const char *msg)
{
    if(errno)
    {
        perror(msg);
    }
    else
    {
        fprintf(stderr, "%s\n", msg);
    }
    exit(1);
}
