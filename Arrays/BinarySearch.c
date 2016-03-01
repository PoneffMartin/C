/* 
Binary search works only on sorted collections. It picks the mid element of the collection and checks if it's equal to the
searched element.
If it's equal, returns the mid index.
If it's smaller, cuts the right half of the collection and repeats the same step.
If it's larger, cuts the left half of the collection and repeats the same step.
 */

#include <stdio.h>

int* sortArray(int *array, int size);

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
    int size, num, isFound=0;
    scanf("%d", &size);
    int array[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }   
    *array=sortArray(array, size);
    printf("Enter num you are looking for: ");
    scanf("%d", &num);
    int min=0, max=size-1;
    int mid=(min+max)/2;   
    while(min!=max)
    {
        if(num==array[mid])
        {
            isFound=1;
            break;
        }
        else if(num>array[mid])
        {
            min=mid+1;
            mid=(min+max)/2;
        }
        else
        {
            max=mid-1;
            mid=(min+max)/2;
        }
    }
    if(isFound)
    {
        printf("%d found at index %d.", num, mid);
    }
    else
        printf("%d not found.", num);
    
    return 0;
}

