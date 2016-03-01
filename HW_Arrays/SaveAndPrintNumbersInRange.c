/* 
Write a program that reads n numbers from the console and saves them in an array. The program should then print the
elements of the array on the console.
 */

#include <stdio.h>

int main()
{
    printf("Enter size of array: ");
    int i,n;
    scanf("%d", &n);
    double array[n];
    double element;
    for(i=0; i<n; i++)
    {
        scanf("%lf", &element);
        array[i]=element;
    }
    for(i=0; i<n; i++)
    {
        printf("%.2lf ", array[i]);
    }
    
    return 0;
}

