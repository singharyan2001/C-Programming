/*
    Recursions
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

/*Recursive*/
int factr(int n) //5
{
    int answer;
    if(n==1)
        return(1);
    answer = factr(n-1)*n; // Recursive call
    return (answer);
}

/*Non-Recursive*/
int fact(int n)
{
    int t, answer;
    answer = 1;
    for(t=1; t <= n; t++)
    {
        answer = answer*(t);
    }
    return (answer);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\nFactorial of %d using recursive function is %d", number, factr(number));
    printf("\nFactorial of %d using Non-recursive function is %d", number, fact(number));
    return 0;
}