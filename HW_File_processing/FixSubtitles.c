/* 
Write a program that takes as arguments input subtitles file and offset in milliseconds. The program should edit the
subtitles' timing by the given offset. The subtitles will contains will be in the format specified below.
#num
hh:mm:ss:ms --> hh:mm:ss:ms
text
The program should correctly modify seconds, minutes and hours when overflow occurs (i.e. 61 seconds is not
valid). Example: 00:00:52:580 + 700 -> 00:00:53:280. The program should support modifying subtitles in the range
[00:00:00:00 - 99:59:59:999].
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void kill(const char*);
void startSubsFix(int offset);
void endSubsFix(int offset);
void startTimeParsing(char *token);
void endTimeParsing(char *token);

struct time
{
    int hours;
    int minutes;
    int seconds;
    int milliseconds;
    
}startTime, endTime;

int main(int argc, char** argv) 
{
    if(argc<3)
        kill("Usage: ./prog <src.txt> <offset>");
    FILE* subtitles=fopen(argv[1], "r+");
    if(!subtitles)
        kill(argv[1]);
    int offset=atoi(argv[2]);
    char *time=NULL;
    size_t size=0;
    ssize_t readBytes=getline(&time, &size, subtitles);
    while(!feof(subtitles))
    {
        
        if(strchr(time, '>'))
        {            
            fseek(subtitles, -readBytes, SEEK_CUR);
            char *start=strtok(time, " ");//Gets start time
            char *arrow=strtok(NULL, " ");//Gets -->
            char *end=strtok(NULL, " ");//Gets end time               
            startTimeParsing(start); 
            endTimeParsing(end);
            startSubsFix(offset);
            endSubsFix(offset);
            fprintf(subtitles, "%02d:%02d:%02d,%03d --> %02d:%02d:%02d,%03d",
                    startTime.hours, startTime.minutes, startTime.seconds,
                    startTime.milliseconds, endTime.hours, endTime.minutes,
                    endTime.seconds, endTime.milliseconds);
        }
        readBytes=getline(&time, &size, subtitles);
    }
    printf("Success");
    free(time);
    fclose(subtitles);
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

void startSubsFix(int offset)
{    
    int millisecondsToAdd=999-startTime.milliseconds;
    while(offset>=millisecondsToAdd)
    {
        startTime.milliseconds=0;
        offset -=millisecondsToAdd;
        offset--;
        millisecondsToAdd=999;
        if(startTime.seconds<59)
        {
            startTime.seconds++;
        }
        else if(startTime.minutes<59)
        {
            startTime.seconds=0;
            startTime.minutes++;
        }
        else if(startTime.hours<99)
        {
            startTime.minutes=0;
            startTime.hours++;
        }
        else
        {
            printf("No fixing possible\n");
            break;
        }
    }
    startTime.milliseconds +=offset;
}

void endSubsFix(int offset)
{
    int millisecondsToAdd=999-endTime.milliseconds;
    while(offset>=millisecondsToAdd)
    {
        endTime.milliseconds=0;
        offset -=millisecondsToAdd;
        offset--;
        millisecondsToAdd=999;
        if(endTime.seconds<59)
        {
            endTime.seconds++;
        }
        else if(endTime.minutes<59)
        {
            endTime.seconds=0;
            endTime.minutes++;
        }
        else if(endTime.hours<99)
        {
            endTime.minutes=0;
            endTime.hours++;
        }
        else
        {
            printf("No fixing possible\n");
            break;
        }
    }
    endTime.milliseconds +=offset;
}
void endTimeParsing(char *token)
{
    endTime.hours=atoi(strtok(token, ":,"));
    endTime.minutes=atoi(strtok(NULL, ":,"));
    endTime.seconds=atoi(strtok(NULL, ":,"));
    endTime.milliseconds=atoi(strtok(NULL, ":,"));
}

void startTimeParsing(char *token)
{
    startTime.hours=atoi(strtok(token, ":,"));
    startTime.minutes=atoi(strtok(NULL, ":,"));
    startTime.seconds=atoi(strtok(NULL, ":,"));
    startTime.milliseconds=atoi(strtok(NULL, ":,"));
}