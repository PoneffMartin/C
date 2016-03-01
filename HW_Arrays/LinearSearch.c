/* 
Given an array of n integers, write a linear search function that determines whether a given element exists in the array.
On the first line you will receive the number n. On the second line, there will be n numbers, space-separated. On the
third line, the search number will be given.
 */

#include <stdio.h>
#include <string.h>
#define buffer_size 50
int main()
{
    int n, isInArray=0;
    scanf("%d", &n);
    double array[n], element;
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
    scanf("%lf", &element);    
    for(int i=0; i<n; i++)
    {
        if(array[i]==element)
        {
            isInArray=1;
            break;
        }
    }   
    printf(isInArray? "yes":"no");
    
    return 0;
}

