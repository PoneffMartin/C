/* 
Declare the following functions in a header file (.h). Implement them in a separate .c file. Include the .h file in your
main program and demonstrate the written functions.
arr_min() - returns the smallest element in the array
arr_max() - returns the largest element in the array
arr_clear() - sets all array elements to 0
arr_average() - returns the average of all elements
arr_sum() - returns the sum of all array elements
arr_contains() - returns whether the array contains the specified element
 Bonus:
arr_merge() - receives two arrays, merges them into one and returns a pointer to the resulting array
 */

#include <stdio.h>
#include "array_manipulation.h"
#include <string.h>
#include <stdlib.h>
#define size 4

int main()
{   
    double arrayA[size];
    double arrayB[size];
    double searchedElement;
    int isFound;
    printf("Size of arrays is %d.\n", size);
    printf("Enter elements of arrayA\n");
    for(int i=0; i<size; i++)
    {
        scanf("%lf", &arrayA[i]);
    }  
    printf("Min element=%.2lf\n", arr_min(arrayA, size));
    printf("Max element=%.2lf\n", arr_max(arrayA, size));
    printf("Average sum of elements is %lf\n", arr_average(arrayA, size));
    printf("Sum of elements is %lf\n", arr_sum(arrayA, size));
    printf("Enter element you are looking for: ");
    scanf("%lf", &searchedElement);
    isFound=arr_contains(arrayA, size, searchedElement);
    printf(isFound? "The element is in the array\n":"The element is not in the array\n");
    printf("Enter elements of arrayB:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%lf", &arrayB[i]);
    }
    double *mergedArray=arr_merge(arrayA, arrayB, size, size);
    printf("Merged array is:");
    for(int i=0; i< 2*size ; i++)
    {
        printf("%.2lf ", mergedArray[i]);
    }
    free(mergedArray);
    printf("\n");
    printf("Cleared array is: ");
    arr_clear(arrayA, size);
    for(int i=0; i<size; i++)
    {
        printf("%.2lf ", arrayA[i]);
    }
    
    return 0;
}

