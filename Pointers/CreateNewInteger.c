/* 
Write a function that declares and initializes and integer on the stack, then returning it. Try creating the function
with two different declarations:
 */

#include <stdio.h>
int new_variable()
{
    int new_var;
    scanf("%d", &new_var);
    return new_var;
}
int *new_variable_ptr()
{
    int *ptr;
    int new_var;
    scanf("%d", &new_var);
    ptr=&new_var;
    return ptr;
}

int main()
{
    int new_int=new_variable();
    int *ptr=new_variable_ptr();
    printf("%d\n", *ptr);
    printf("%d", new_int);
    return 0;
}

