/* 
Write a program to generate the following matrix of palindromes of 3 letters with r rows and c columns:
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int i, j, k;
    char a='a';
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%c%c%c ", a+i, a+j+i, a+i);
        } 
        printf("\n");
    }
    
    return 0;
}

