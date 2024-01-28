/*
    here
    Tasks
    1) WAP that Reverse a string - read i/p keyboard, need to use string length function
    2) WAP that sorts the strings of an array using a bubble sort - need to use strncmp, strcpy functions
    3) 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void revstr(char str[]);

int main()
{
    // Task 1
    // Initilizations or declarations
    char ipstr[100];
    //int length = 0;
    //Input
    printf("Enter string: ");
    scanf(" %s", ipstr);
    
    //Functions
    //length = strlen(ipstr);
    revstr(ipstr);

    //Output
    printf("%s\n", ipstr);
    //printf("Length of \"%s\" is: %d\n", ipstr, length);
    printf("Reverse string is: %s\n", ipstr);
    printf("\n");

    // Task 2

    char name[50][25], temp[25];
    int i,j,n;

    printf("Sort strings of an array using bubble sort: \n");
    printf("\n");
    printf("input number of strings: ");
    scanf("%d", &n);

    printf("Input string %d: \n", n);

    for(i = 0; i <= n; i++)
    {
        scanf("%s", name[i]);
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 0; j <= n-i; j++)
        {
            if(strcmp(name[j], name[j+1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1], temp, sizeof(name[j])-1);
            }
        }
    }

    printf("The strings appear after sorting: \n");

    for(i = 0; i <= n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}

void revstr(char str[])
{
    //function for reverse string
    int count = 0;
    char R;
    while(str[count] != '\0')
    {
        count++;
    }
    
    for(int i = 0; i < ((count/2)); i++)    // 5/2 = 2; 0 to 2 iterate; H E L L O - 0 1 2 3 4;
    // 0 < 2 true; 2 < 2 false
    {
        // 1st Iteration explanation
        R = str[i];                     // i = 0; str[0] = H                    
        // R = 'H'
        str[i] = str[count - 1 - i];    // i = 0; str[i] = str[5-1-i]
        // str['H'] = str['o']
        str[count-1-i] = R;             // str[5-1-i] = R i.e H
        // str['o'] = 'H'
    }
}
