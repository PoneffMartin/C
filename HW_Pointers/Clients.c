/* 
Declare a struct called Client with the following members: name, age and account balance. 
Write a function that sorts an array of clients using a specific comparator. The comparator should be another
function that determines how the clients are sorted. Write comparators for sorting the clients by name, age and
account balance.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 50

struct client
{
    char name[BUFFER];
    int age;
    double balance;
};

void sortByName(struct client**);
void sortByAge(struct client**);
void sortByBalance(struct client**);
void swap(void*, void*, size_t);
void sort(struct client**, void (*sorting)(struct client**));

void sort(struct client** clients, void (*sorting)(struct client**))
{
    sorting(clients);
}

void sortByName(struct client **clients)
{
    int i, isSorted=1;
    while(isSorted)
    {
        isSorted=0;
        for(i=0; i<1; i++)
        {
            if(clients[i]->name[0]>clients[i+1]->name[0])
            {
                struct client *temp=clients[i];
                clients[i]=clients[i+1];
                clients[i+1]=temp;
            }
        }
    }   
}

void sortByAge(struct client **clients)
{
    int isSorted=1;
    int i;
    while(isSorted)
    {
        isSorted=0;
        for(i=0; i<1; i++)
        {
            if(clients[i]->age>clients[i+1]->age)
            {
                struct client *temp=clients[i];
                clients[i]=clients[i+1];
                clients[i+1]=temp;
            }
        }
    }
}

void sortByBalance(struct client **clients)
{
    int isSorted=1;
    int i;
    while(isSorted)
    {
        isSorted=0;
        for(i=0; i<1; i++)
        {
            if(clients[i]->balance<clients[i+1]->balance)
            {
                struct client *temp=clients[i];
                clients[i]=clients[i+1];
                clients[i+1]=temp;
            }
        }
    }
}

int main()
{   
    struct client *clients[2];    
    int i;
    for(i=0; i<2; i++)
    {
        clients[i]=malloc(sizeof(struct client));
        if(!clients)
        {
            return 1;
        }
    }
    for(i=0; i<2; i++)
    {
        printf("Enter name of client %d: ", i+1);
        fgets(clients[i]->name, BUFFER, stdin); 
        printf("Enter age of client %d: ", i+1);
        scanf("%d", &clients[i]->age);
        printf("Enter account balance of client %d: ", i+1);
        scanf("%lf%*c", &clients[i]->balance);
        printf("\n");
    }
    
    sort(clients, &sortByName);
    printf("Clients sorted by name\n");
    for(i=0; i<2; i++)
    {
        printf("Client %d\n", i+1);
        printf("Name: %sAge: %d\nBalance: %.3lf$\n",clients[i]->name, 
                clients[i]->age, clients[i]->balance);
        printf("\n");
    }
    sort(clients, &sortByAge);
    printf("Clients sorted by age\n");
    for(i=0; i<2; i++)
    {
        printf("Client %d\n", i+1);
        printf("Name: %sAge: %d\nBalance: %.3lf$\n",clients[i]->name, 
                clients[i]->age, clients[i]->balance);
        printf("\n");
    }
    sort(clients, &sortByBalance);
    printf("Clients sorted by account balance\n");
    for(i=0; i<2; i++)
    {
        printf("Client %d\n", i+1);
        printf("Name: %sAge: %d\nBalance: %.3lf$\n",clients[i]->name, 
                clients[i]->age, clients[i]->balance);
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        free(clients[i]);
    }
   
    return 0;
}

