/* Declare two string (char array) variables holding your first name and last name. 
 Print them in the console (mind adding an interval between them).*/

#include <stdio.h>

int main() 
{
    char firstName[7]="Martin";
    char lastName[6]="Ponev";
    
    printf("%s %s", firstName, lastName);
    return 0;
}

