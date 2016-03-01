/* 
Write a program that takes as input two arrays of integers and joins them. The result should hold all numbers from the
first array, and all numbers from the second array, without repeating numbers, and arranged in increasing order. On
the first input line, you are given the count of the elements of the first array. On the next line you are given the length of
the second array.
 */

#include <stdio.h>


int* FillAndSortArray(int *array, int *resultArray, int size);
int sizeOfSortedArray(int *array, int size);

int sizeOfSortedArray(int *array, int size)
{
    int isDifferent, i;
    int sizeOfSortedArray=1;
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            isDifferent=1;
            if(array[i]==array[j])
            {
                isDifferent=0;
                break;
            }
        }
        if(isDifferent)
        {
            sizeOfSortedArray++;
        }
    }
    return sizeOfSortedArray;
    
}

int* FillAndSortArray(int *array, int *resultArray, int size)
{
    int isDifferent, i,k=0;
    for(int i=0; i<size; i++)
    {        
        for(int j=i+1; j<size; j++)
        {         
            isDifferent=1;   
            if(array[i]==array[j])
            {
                isDifferent=0;
                break;
            }
        }
        if(isDifferent)
        {
            resultArray[k]=array[i];  
            k++;
        }
    }
    int isSorted=1;
    while(isSorted)
    {
        isSorted=0;
        for(int i=0; i<k-1; i++)
        {            
            if(resultArray[i]>resultArray[i+1])
            {
                int temp=resultArray[i];
                resultArray[i]=resultArray[i+1];
                resultArray[i+1]=temp;
                isSorted=1;
            }
        }
    }
    return *resultArray;
}


int main()
{
    int length1, length2, i, j;
    scanf("%d %d", &length1, &length2);
    int array1[length1];
    int array2[length2];
    int tempArrSize=length1+length2;
    int tempArray[tempArrSize];    
    for(i=0; i<length1; i++)
    {
        scanf("%d", &array1[i]);
        tempArray[i]=array1[i];
    }
    for(j=0; j<length2; j++)
    {
        scanf("%d", &array2[j]);   
        tempArray[length1+j]=array2[j];
    }
    int size=sizeOfSortedArray(tempArray, tempArrSize);
    int sortedArray[size];
    *sortedArray=FillAndSortArray(tempArray, sortedArray, tempArrSize);
    
    for(i=0; i<size; i++)
    {
        printf("%d ", sortedArray[i]);
    }
    return 0;
}

