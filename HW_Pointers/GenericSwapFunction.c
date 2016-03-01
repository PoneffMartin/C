/* 
Write a function that takes 2 pointers and swaps the memory they point to. The function should also take the size
of each memory piece and should work with any data type.
 */

#include <stdio.h>

void swap(void *a, void *b, size_t size) 
{
    char *aPtr = a;
    char *bPtr = b;
    int i;
    for (i = 0; i < size; i++) 
    {
        char temp = aPtr[i];
        aPtr[i] = bPtr[i];
        bPtr[i] = temp;
    }
}

int main() 
{
    //Char type
//    char letter = 'B', symbol = '+';
//    swap(&letter, &symbol, sizeof (char));
//    printf("%c %c", letter, symbol);
    //Int type
//    int a = 10, b = 6;
//    swap(&a, &b, sizeof(int));
//    printf("%d %d", a, b);
    //Double type
    double d = 3.14, f = 1.23567;
    swap(&d, &f, sizeof(double));
    printf("%.2f %.2f", d, f);
    
    return 0;
}

