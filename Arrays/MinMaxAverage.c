/* 
Write a program that reads N floating-point numbers from the console. Your task is to separate them in two sets, one
containing only the round numbers (e.g. 1, 1.00, etc.) and the other containing the floating-point numbers with non-
zero fraction. Print both arrays along with their minimum, maximum, sum and average (rounded to two decimal places).
The numbers should be entered one at a line. On the first input line you will be given the count of the numbers.
 */

#include <stdio.h>

double arr_min(double array[], int size);
double arr_max(double array[], int size);

double arr_min(double array[], int size)
{
    double min=array[0];
    for(int i=1; i<size; i++)
    {      
        if(min>array[i])
        {
            min=array[i];
        }
    }
    return min;
}
double arr_max(double array[], int size)
{ 
    double max=array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}


int main()
{
    int n, count_one=0, count_two=0;
    scanf("%d", &n);
    double array[n], arrayOfInts[n], arrayOfFloats[n], sumOfInts=0,
           sumOfFloats=0;
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
    for(int i=0, j=0, a=0; i<n; i++)
    {
        if((array[i]-(int)array[i])==0)
        {
            arrayOfInts[a++]=array[i];
            sumOfInts +=array[i];
            count_two++;           
        }
        else
        {
            arrayOfFloats[j++]=array[i];
            sumOfFloats +=array[i];
            count_one++;
        }
    }
    double min_float=arr_min(arrayOfFloats, count_one);
    double max_float=arr_max(arrayOfFloats, count_one);
    double avgFloats=sumOfFloats/count_one;
    double min_ints=arr_min(arrayOfInts, count_two);
    double max_ints=arr_max(arrayOfInts, count_two);
    double avgInts=sumOfInts/count_two;
    
    printf("[");
    for(int i=0; i<count_one; i++)
    {
        printf("%.3lf", arrayOfFloats[i]);
        if(i<=count_one-2)
        {
            printf(", ");
        }
    }
    printf("]-> min: %.3f max: %.3f sum: %.3f avg: %.2f\n",min_float, max_float, sumOfFloats, avgFloats );
    
    printf("[");
    for(int i=0; i<count_two; i++)
    {
        printf("%.3lf", arrayOfInts[i]);
        if(i<=count_two-2)
        {
            printf(", ");
        }
    }
    printf("]-> min: %.3f max: %.3f sum: %.3f avg: %.2f",min_ints, max_ints, sumOfInts, avgInts );
    
    return 0;
}

