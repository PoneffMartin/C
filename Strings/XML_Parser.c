/* 
Write a program that reads n lines in XML format and parses their contents. A line is considered valid if it follows the
format <{tag}>{data}</{tag}>. In case of invalid line format, print "Invalid format".
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
    
int extract_xml(char *line)
{
    char *firstOpeningBracket=strchr(line, '<');
    if(!firstOpeningBracket) return NULL;
    char *firstClosingBracket=strchr(firstOpeningBracket+1, '>');
    if(!firstClosingBracket) return NULL;
    char *secondOpeningBracket=strstr(firstClosingBracket+1, "</"); 
    if(!secondOpeningBracket) return NULL;
    char *secondClosingBracket=strchr(secondOpeningBracket, '>');
    if(!secondClosingBracket) return NULL;
    char *firstTag=firstOpeningBracket+1;
    firstClosingBracket[0]='\0';
    char *secondTag=secondOpeningBracket+2;
    secondClosingBracket[0]='\0';

    int areEqual=strcmp(firstTag, secondTag)==0;
    if(!areEqual)
    {
        return NULL;       
    }
    secondOpeningBracket[0]='\0';
    char *data=firstClosingBracket+1;
    firstTag[0]=toupper(firstTag[0]);
    char *result = malloc(strlen(firstTag)+strlen(data)+3);
    sprintf(result, "%s: %s", firstTag, data);
}

int main()
{
    char *line=NULL;
    size_t size=0;
    getline(&line, &size, stdin);
    size_t i;
    for(i=0; i<3; i++)
    {
        char *data=extract_xml(line);
        if(!data)
            printf("Invalid format\n");
        else
            printf("%s\n", data);
        free(data);
        getline(&line, &size, stdin);
    }
    free(line);
    return 0;
}

