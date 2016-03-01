/* 
 *Declare a string variable and assign to it the following value:
 * The "use" of quotations causes difficulties. \n, \t and \ are also special
characters.
 */

#include <stdio.h>

int main()
{
    char str[]="The \"use\" of quotations causes difficulties. \\n, \\t and \\ are also special characters.";
    printf("%s", str);
    
    return 0;
}

