/*
    Tasks
   1) Write a function to count the number of characters in a string(lenght)
   2) Write a function to concatenate two character strings
   3) Write a function that determines if two strings are equal

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

//Task1
int strlength(char x[]);

//Task2
void strconcatenate(char R[], const char s1[], const char s2[]);

//Task3
bool equalstr(const char ss1[], const char ss2[]);

int main()
{
    //task 1
    char ipstr[100];
    int length;
    printf("Enter a string: ");
    scanf("%s", ipstr);

    length = strlength(ipstr);
    printf("The length of the string \"%s\" is: %d\n", ipstr, length);

    //task2
    const char str1[] = "Jadon sancho plays";
    const char str2[] = "for Manchester United";
    char Result[100];

    strconcatenate(Result, str1, str2);
    printf("\nConcatenated strings: %s\n", Result);

    //task3
    printf("%d\n", equalstr("Aryan", "Singh"));
    printf("%d\n", equalstr("Aryan", "Aryan"));

    return 0;
}

int strlength(char x[])
{
    unsigned int count = 0;

    while(x[count] != '\0')
    {
        ++count;
    }
    return count;
    
}

void strconcatenate(char R[], const char s1[], const char s2[])
{
    int i,j;
    for(i = 0; s1[i] != '\0'; i++)
    {
        R[i] = s1[i];
    }

    for(j = 0; s2[j] != '\0'; j++)
    {
        R[i+j] = s2[j];
    }
    R[i+j] = '\0';
}

bool equalstr(const char ss1[], const char ss2[])
{
    int i = 0;
    bool isEquals = false;

    while(ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0')
    {
        i++;
    }

    if(ss1[i] == '\0' && ss2[i] == '0')
    {
        isEquals = true;
    }
    else{
        isEquals = false;
    }
    return isEquals;
}

