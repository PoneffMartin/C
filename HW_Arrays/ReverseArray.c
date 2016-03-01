/* 
Write a program that reverses an array of numbers. The numbers should be entered one at a line. On the first input line
you will be given the count of the numbers
 */

#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    int reversedArray[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i=0, j=size-1; i<size; j--,i++)
    {
        reversedArray[i]=array[j];
    }
    for(int i=0; i<size; i++)
    {
        printf("%d ", reversedArray[i]);
    }
    
    return 0;
}

