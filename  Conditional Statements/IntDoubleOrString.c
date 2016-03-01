/* 
Write a program that, depending on the user’s choice, inputs an int, double or string variable. If the variable
is int or double, the program increases it by one. If the variable is a string, the program appends "*" at the end. Print
the result at the console. Use switch statement.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    int integer;
    double floatingPoint;
    char string[100];    
        
    printf("Please choose a type:\n1-->int\n2-->double\n3-->string\n");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1: 
            printf("Please enter an int: ");
            scanf("%d", &integer);
            integer++;
            printf("%d", integer);
            break;
        
        case 2:
            printf("Please enter a double: ");
            scanf("%lf", &floatingPoint);
            floatingPoint++;
            printf("%.2lf", floatingPoint);
            break;
        case 3:
            printf("Please enter a string: ");
            scanf("%99s", string);          
            printf("%s*", string);
            break;
        default:
            printf("invalid choice");
    }
    
    return 0;
}

