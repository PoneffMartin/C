/* 
You are given n integers (given in a single line, separated by a space). Write a program that checks whether the
product of the odd elements is equal to the product of the even elements. Elements are counted from 1 to n, so the
first element is odd, the second is even, etc.
 */

#include <stdio.h>
#include <string.h>
#define LINE_LENGTH 30

int main()
{
    
    char line[LINE_LENGTH];
    fgets(line, LINE_LENGTH, stdin);
    int length=strlen(line);
    if(line[length-1]=='\n')
    {
        line[length-1]='\0';
    }
    int isOdd=1;
    int evenProduct=1, oddProduct=1;
    char *token=strtok(line, " ");
    while(token!=NULL)
    {
        int num=atoi(token);
        if(isOdd)
        {
            oddProduct*=num;
        }
        else
        {
            evenProduct*=num;
        }
        isOdd = !isOdd;
        token = strtok(NULL, " ");
    }
    
    if(oddProduct==evenProduct)
    {
        printf("yes\n%d", oddProduct);
    }
    else
    {
        printf("no\n");
        printf("odd_product=%d\n", oddProduct);
        printf("even_product=%d", evenProduct);
    }
    
    
    return 0;
}

