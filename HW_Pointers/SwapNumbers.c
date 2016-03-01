/* 
Implement a function which takes as input two numbers and swaps their values. The declaration of the function
should be something like:
 */

#include <stdio.h>
void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Before exchange\na=%d\nb=%d\n", a, b);
    swap(&a, &b);
    printf("After exchange\na=%d\nb=%d", a, b);
    
    return 0;
}

