/* 
Write a function which takes as input an integer and prints the address of it in the memory.
Try printing the address of the integer in the function and in the main function. What is the difference and why?
 */

#include <stdio.h>

void printAddress(int a)
{
    printf("%p\n", &a);
}
int main()
{
    int integer;
    scanf("%d", &integer);
    printAddress(integer);
    printf("%p", &integer);
    
    return 0;
}

