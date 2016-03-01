/* 
Classical play cards use the following signs to designate the card face: 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K and A.
 Write a program that enters a string and prints “yes” if it is a valid card sign or “no” otherwise.
 */

#include <stdio.h>

int main()
{
    char card[3];
    fgets(card, 3, stdin);
    
    char *symb;
    long number=strtol(card, &symb, 10);
            
    switch(number)
    {

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:           
        case 10:          
            printf("yes");
            break;
        default:
            switch(*symb)
            {
                case 'J':
                case 'Q':
                case 'K':
                case 'A':
                    printf("yes");
                    break;
                default:
                    printf("no");
                    break;
            }            
            break;
    }            
       
    
        
    return 0;
}

