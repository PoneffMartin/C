/* 
Write a function get_max() with two parameters that returns the bigger of two integers. Write a program that
reads 2 integers from the console and prints the largest of them using the function get_max(). Declare a function
prototype before defining the function.
 */

#include <stdio.h>

int get_max(int a, int b);

int get_max(int a, int b)
{
    if(a>=b)
    {
        return a;
    }
    return b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", get_max(a, b));
    
    return 0;
}

