/* 
Write a program that converts a number in the range [0...999] to words, corresponding to the English
pronunciation.
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char zeroToNine[10][10]={"zero", "one", "two", "three", "four", 
                       "five", "six", "seven", "eight", "nine"};
    char tenToNineteen[10][10]={"ten","eleven","twelve","thirteen","fourteen",
                        "fifteen","sixteen","seventeen","eighteen","nineteen"};
    char twentyToNinety[8][10]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    
    
    int ones, tens, hundreds, number;
    scanf("%d", &number);
    if(number<0||number>999)
    {
        printf("invalid number");
    }
    else
    {
        hundreds=number/100;
        tens=(number/10)%10;
        ones=number%10;
        
        if(hundreds==0)
        {
            if(tens==0)
            {
                zeroToNine[ones][0]=toupper(zeroToNine[ones][0]);
                printf("%s", zeroToNine[ones]);
            }
            else if(tens==1)
            {
                tenToNineteen[ones][0]=toupper(tenToNineteen[ones][0]);
                printf("%s", tenToNineteen[ones]);
            }
            else 
            {
                if(ones==0)
                {
                    twentyToNinety[tens-2][0]=toupper(twentyToNinety[tens-2][0]);
                    printf("%s", twentyToNinety[tens-2]);
                }
                else
                {
                    twentyToNinety[tens-2][0]=toupper(twentyToNinety[tens-2][0]);
                    printf("%s %s", twentyToNinety[tens-2], zeroToNine[ones]);
                }
            }
        }
        else
        {
            if(tens==0&&ones==0)
            {
                zeroToNine[hundreds][0]=toupper(zeroToNine[hundreds][0]);
                printf("%s hundred", zeroToNine[hundreds]);
            }
            else if(tens>=2&&ones!=0)
            {
                zeroToNine[hundreds][0]=toupper(zeroToNine[hundreds][0]);
                printf("%s hundred and %s ", zeroToNine[hundreds], twentyToNinety[tens-2]);
                zeroToNine[ones][0]=tolower(zeroToNine[ones][0]);
                printf("%s", zeroToNine[ones]);
            }
            else if(tens>=2&&ones==0)
            {
                zeroToNine[hundreds][0]=toupper(zeroToNine[hundreds][0]);
                printf("%s hundred and %s", zeroToNine[hundreds], twentyToNinety[tens-2]);
            }
            else if(tens==0&&ones!=0)
            {
                zeroToNine[hundreds][0]=toupper(zeroToNine[hundreds][0]);
                printf("%s hundred and ", zeroToNine[hundreds]);
                zeroToNine[ones][0]=tolower(zeroToNine[ones][0]);
                printf("%s", zeroToNine[ones]);
            }
            else
            {
                zeroToNine[hundreds][0]=toupper(zeroToNine[hundreds][0]);
                printf("%s hundred and %s", zeroToNine[hundreds], tenToNineteen[ones]);
            }
        }
        
    }
    

    return 0;
}

