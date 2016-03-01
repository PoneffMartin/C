/* 
Write a program that copies the contents of a binary file (e.g. image, video, etc.) to another file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define BUFFER 4096

void kill(const char*);

int main(int argc, char** argv) 
{
    if(argc<3)
        kill("Usage: ./prog <src.jpg> <dest.txt>");
    FILE* binaryFile=fopen(argv[1], "r");
    if(!binaryFile)
        kill(NULL);
    FILE* destFile=fopen(argv[2], "w");
    if(!destFile)
        kill(NULL);
    char buffer[BUFFER];
    while(1)
    {
        size_t readBytes=fread(buffer, 1, BUFFER, binaryFile);
        if(feof(binaryFile)&&readBytes<=0)
                break;
        fwrite(buffer, 1, BUFFER, destFile);       
    }
    fclose(binaryFile);
    fclose(destFile);
    
    return (EXIT_SUCCESS);
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