/* 
Write a function that determines the position of the rightmost occurrence of a character ch in a string str. If
no such character exists, the function should return -1.
 */

#include <stdio.h>
#include <string.h>

int rigthmostPosOfChar(char *str, char ch);

int rigthmostPosOfChar(char *str, char ch)
{
    int lengthOfStr=strlen(str)-1;
    int i;
    int position=0;
    for(i=0; i<lengthOfStr; i++)
    {
        if(str[i]==ch)
        {
            position=i+1;
        }
    }
    if(position==0)
    {
        return -1;
    }   
    return position;
}

int main()
{

    char string[100];
    fgets(string, 100, stdin);
    char character;
    scanf("%c", &character);
    
    int position=rigthmostPosOfChar(string, character);
    printf("%d", position);
    
    return 0;
}

