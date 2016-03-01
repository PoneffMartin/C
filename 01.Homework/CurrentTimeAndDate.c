//Create a console application that prints the current date and time. 

#include <stdio.h>
#include <time.h>

int main()
{   
    time_t currentTime=time(NULL);
    
    printf("Current date and time is %s", ctime(&currentTime));
    
    return 0;
}