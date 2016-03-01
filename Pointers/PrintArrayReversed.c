/* 
You are given a sample array as input and your task is to print the array in reversed order using pointer arithmetic
instead of indexing.
 */

#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int i;
    int array[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=size-1; i>=0; i--)
    {
        printf("%d ", *(array+i));
    }
    return 0;
}

