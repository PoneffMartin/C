/* 
Implement binary search using recursion. You are not allowed to use loops.
 */

#include <stdio.h>

int binarySearch(int *array, int min, int max, int num)
{
    int mid, isFound=0;
    if(min<=max)
    {
        mid=(min+max)/2;
        if(num==array[mid])
        {
            isFound=1;
            return isFound;
        }
        else if(num<array[mid])
        {
            return binarySearch(array, min, mid-1, num);
        }
        else
        {
            return binarySearch(array, mid+1, max, num);
        }
    }    
    else
        return isFound;
}

int* sortArray(int *array, int size)
{
    int isSorted=1;
    while(isSorted)
    {
        isSorted=0;
        for(int i=0; i<size-1; i++)
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                isSorted=1;
            }
        }
    }    
    return *array;
}

int main()
{
    printf("Enter size of array: ");
    int i, n;
    scanf("%d", &n);
    int array[n];
    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    int mid=(n-1)/2;
    *array=sortArray(array, n);
    int num;
    printf("Enter num you are looking for: ");
    scanf("%d", &num);
    int isFound=binarySearch(array, 0, n-1, num);
    printf(isFound? "%d found":"not found", num);
    
    return 0;
}

