// Functions - having multiple returns

#include<stdio.h>

int fun();

int main()
{
    int value;
    value = fun();
    printf("The value of n is: %d\n", value);
    return 0;
}

int fun()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if(n >= 10 && n <= 90)
    {
        return n;
    }
    else{
        return (n+32);
    }
}