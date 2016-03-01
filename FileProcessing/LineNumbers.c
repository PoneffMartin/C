/* 
Write a program that reads a text file and inserts line numbers in front of each of its lines. The result should be
written to another text file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void kill(const char*);

int main(int argc, char** argv) 
{
    if(argc<2)
        kill("Usage: ./prog <src.txt>");
    FILE *file=fopen(argv[1], "r");
    if(!file)
        kill(NULL);
    FILE *modified=fopen("modified.txt", "w");
    if(!modified)
        kill(NULL);
    char *buffer=NULL;
    size_t size=0;
    int i=0;
    while(1)
    {
        ssize_t readBytes=getline(&buffer,&size, file);
        if(feof(file)&&readBytes<=0)
            break;        
        fprintf(modified, "%d %s", i++, buffer);
    }
    fclose(file);
    fclose(modified);
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
