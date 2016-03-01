/*Declare five variables choosing for each of them the most appropriate of the types char, short, unsigned
short, int, unsigned int, long, unsigned long to represent the following values: 52130, 8942492113, -
115, 4825932, 97, -10000, -35982859328592389. Choose a large enough type for each number to ensure it will
fit in it.*/
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned short number_1=52130;
    unsigned long number_2=8942492113;
    char number_3=-115;
    int number_4=4825932;
    char number_5=97;
    short number_6=-10000;
    long long number_7=-35982859328592389;
   
    printf("%hu\n", number_1);
    printf("%lu\n", number_2);
    printf("%d\n", number_3);
    printf("%d\n", number_4);
    printf("%d\n", number_5);
    printf("%d\n", number_6);
    printf("%lld", number_7);
    
    return 0;
}

