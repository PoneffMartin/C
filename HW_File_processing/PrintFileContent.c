/*
 Write a program that reads a text file and prints its contents on the console.
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
    char buffer[BUFFER];
    while(!feof(file))
    {
        size_t readBytes=fread(buffer, 1, BUFFER, file);
        buffer[readBytes]='\0';
        printf("%s", buffer);
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