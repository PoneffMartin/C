/* 
Declare an array of integers and print it on the console. Do NOT use the indexer operator [].
 */

#include <stdio.h>

int main()
{
    int array[6]={1, 36, -9, 89, 5, 4};
    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ", *(array+i));
    }
    return 0;
}

