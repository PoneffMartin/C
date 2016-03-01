/* 
Write a program that generates and prints all possible cards from a standard deck of 52 cards (without the jokers).
The cards should be printed using the classical notation (like 5S (♠), AH (♥), 9C (♣) and KD (♦)). The card faces
should start from 2 to A. Print each card face in its four possible suits: clubs, diamonds, hearts and spades. Use 2
nested for-loops and a switch-case statement.
 */

#include <stdio.h>

int main()
{
    char suits[4]={'C', 'D', 'H', 'S'};
    char cardFace[13][3]={"2","3","4","5","6","7","8","9","10","J", "Q", "K", "A"};
    
    for(int i=0; i<13; i++)
    {
        for(int j=0; j<4; j++)
        {                       
            printf("%s%c ", cardFace[i], suits[j]);
            
        }
        printf("\n");
    }
    
    
    return 0;
}

