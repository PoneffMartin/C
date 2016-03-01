/* 
Write a method that returns the index of the first element in array that is larger than its neighbours, or -1 if there's
no such element. Declare a function prototype before defining the function
 */

#include <stdio.h>

int first_larger_than_neighbours(double array[], int size);

int first_larger_than_neighbours(double array[], int size)
{
    for(int i=1; i<size-1; i++)
    {
        if(array[i]>array[i-1]&&array[i]>array[i+1])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    double array[size];
    printf("Enter elements of array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%lf", &array[i]);       
    }
    int index=first_larger_than_neighbours(array, size);
    printf("%d", index);
    
    return 0;
}

