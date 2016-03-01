/* 
 Write a program to prints the entire ASCII table of characters at the console (characters from 0 to 255).
 Note that some characters have a special purpose and will not be displayed as expected. 
 You may skip them or display them differently.
 */

	
#include<stdio.h>
 
int main()
{
    char symbol=0;
    int i;
    for(i=0; i<255; i++)
    {
        printf("%c", symbol);
        symbol++;
    }
}
