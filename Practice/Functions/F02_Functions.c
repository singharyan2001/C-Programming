// Functions

#include<stdio.h>

void spain();
void brazil();
void italy();

int main()
{
    printf("I'm in main()\n");
    spain();
    brazil();
    italy();
    return 0;
}

void spain()
{
    printf("I'm in Spain!\n");
}

void brazil()
{
    printf("I'm in Brazil!\n");
}

void italy()
{
    printf("I'm in Italy!\n");
}