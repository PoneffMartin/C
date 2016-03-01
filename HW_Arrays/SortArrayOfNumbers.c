/* 
Write a program to read an array of numbers from the console, sort them and print them back on the console. Use a
sorting algorithm of your choosing. The numbers should be entered one at a line. On the first input line you will be
given the count of the numbers.
 */

#include <stdio.h>

int main()
{
    int n, i, isSorted=1;
    scanf("%d", &n);
    double array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
    while(isSorted==1)
    {   
        isSorted=0;
        for(int i=0; i<n-1; i++)
        {           
            if(array[i]>array[i+1])
            {
                double ch=array[i];
                array[i]=array[i+1];
                array[i+1]=ch;
                isSorted=1;               
            }                           
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%.2f ", array[i]);
    }   
    return 0;
}

