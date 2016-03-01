#include "array_manipulation.h"
#include <string.h>
#include <stdlib.h>

double arr_min(double array[], int size)
{   
    int i; 
    double min=array[0];
    for(i=1; i<size; i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    return min;
}

double arr_max(double array[], int size)
{    
    int i; 
    double max=array[0];
    for(i=1; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}

void arr_clear(double array[], int size)
{
    memset(array, 0, sizeof(array) * size);    
}

double arr_average(double array[], int size)
{
    double sum=0;
    double average;
    int i;
    for(i=0; i<size; i++)
    {
        sum +=array[i];
    }
    average=sum/size;
    
    return average;
}
//
double arr_sum(double array[], int size)
{
    double sum=0;
    int i;
    for(i=0; i<size; i++)
    {
        sum +=array[i];
    }
    
    return sum;
}
//
int arr_contains(double array[], int size, double num)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(array[i]==num)
        {
            return 1;
        }
    }
    
    return 0;
}

double *arr_merge(double *arrayA, double *arrayB, int sizeA, int sizeB)
{  
    int size=sizeA+sizeB;
    double *mergedArray=malloc(size);
    for(int i=0; i<sizeA; i++)
    {
        mergedArray[i]=arrayA[i];
    }
    for(int i=sizeA, j=0; i<size; i++, j++)
    {
        mergedArray[i]=arrayB[j];
    }
    
    return mergedArray;
}
