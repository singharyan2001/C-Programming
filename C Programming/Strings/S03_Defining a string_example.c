/*
    here
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    char str1[] = "To be or not to be";
    char str2[] = "that is the question";

    unsigned int count = 0; // stores the string length

    // Counting the length
    while(str1[count] != '\0')  //Increment count till we reach the null character
    {
        ++count;    //pre increment
    }

    printf("The lenght of the string: \"%s\" is %d characters.\n",str1, count); // [\"] is an escape sequence

    count  = 0; // resetting counter value

    // counting the length
    while(str2[count] != '\0')
    {
        ++count;
    }

    printf("The lenght of the string: \"%s\" is %d characters.\n",str2, count);

    return 0;
}