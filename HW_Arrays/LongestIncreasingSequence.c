/* 
Write a program to find all increasing sequences inside an array of integers. The numbers should be entered one at a
line. On the first input line you will be given the count of the numbers. Print the sequences in the order of their
appearance in the input array, each at a single line. Separate the sequence elements by a space. Find also the longest
increasing sequence and print it at the last line. If several sequences have the same longest length, print the left-most of
them.
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int currentEnd=0, currentStart=0, maxStart=0, maxEnd=0, maxLength=0, currentLength;
    int next=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    int i=0;
    while(i<=n-1)
    {
        currentStart=i;
        if(array[i]>=array[i+1])
        {
            printf("%d", array[i]);
            currentEnd=i;
        }
        else 
        {       
            while(array[i]<array[i+1]&&i<n-1)
            {              
                i++;
            }
            currentEnd=i;
            for(int j=currentStart; j<=currentEnd; j++)
            {
                printf("%d ", array[j]);
            }
            if(currentEnd-currentStart>maxEnd-maxStart)
            {
                maxEnd=currentEnd;
                maxStart=currentStart;
            }
        }
    printf("\n");
    i=currentEnd+1;      
    }
    printf("Longest: ");
    for(int i=maxStart; i<=maxEnd; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

