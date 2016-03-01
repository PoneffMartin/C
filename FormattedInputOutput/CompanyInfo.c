/* 
A company has name, address, phone number, fax number, web site and manager. The manager has first name,
last name, age and a phone number. Write a program that reads the information about a company and its manager
and prints it back on the console.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 32

int main()
{

    char companyName[size],
        companyAdress[size],
        phoneNumber[size],
        faxNumber[size],
        website[size],
        managerFirstName[size],
        managerLastName[size],
        managerAge[size],
        managerPhone[size];
        
    printf("Company name: ");
    fgets(companyName, size, stdin);
    
    printf("Company adress: ");
    fgets(companyAdress, size, stdin);
    
    printf("Phone number: ");
    fgets(phoneNumber, size, stdin);
    
    printf("Fax number: ");
    fgets(faxNumber, size, stdin);
    if(faxNumber[0]=='\n')
    {
        strcpy(faxNumber, "(no fax)\n");
    }
    
    printf("Web site: ");
    fgets(website, size, stdin);
    
    printf("Manager first name: ");
    fgets(managerFirstName, size, stdin);
    int strLenght=strlen(managerFirstName)-1;
    if (managerFirstName[strLenght]=='\n')
    {
        managerFirstName[strLenght]='\0';
    }
    
    printf("Manager Last name: ");
    fgets(managerLastName, size, stdin);    
    strLenght=strlen(managerLastName)-1;
    if (managerFirstName[strLenght]=='\n')
    {
        managerFirstName[strLenght]='\0';
    }
    printf("Manager age: ");
    fgets(managerAge, size, stdin);
    strLenght=strlen(managerAge)-1;
    if (managerAge[strLenght]=='\n')
    {
        managerAge[strLenght]='\0';
    }
    
    printf("Manager phone: ");
    fgets(managerPhone, size, stdin);
    strLenght=strlen(managerPhone)-1;
    if (managerPhone[strLenght]=='\n')
    {
        managerPhone[strLenght]='\0';
    }
    
    printf("%sAdress: %sTel. %sFax: %sWeb site: %sManager: %s %s (age: %s, tel. %s)",
            companyName,
            companyAdress,
            phoneNumber,
            faxNumber,
            website,
            managerFirstName,
            managerLastName, 
            managerAge,
            managerPhone);
    
    
    return 0;
}
    