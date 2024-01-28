/*
    String functions - include<stringh.h> header file required
    1) strlen() - getting the length of the string
    2) strcpy(0 & strncpy() - copying one character string to another
    3) strcat() & strncat() - combining two character strings together (Concatenation)
    4) strcmp() & strncmp() - determines if two character strings are equal or not.

    strcpy() does not check to see whether the source string  actually fits in the target string. that is why strncpy() is a safe way to copy strings.
    strncpy() taskes a third argument i.e max number of characters to copy. also avoids buffer overflows.

    strcat() function does not check to see whether the second string will fit in the first array.
    If you fail to allocate enough space for the first array, you will run into problems as excess characters overflow into adjacent memory locations.
    using strncat() instead, it takes a seciond argument indicating the max no of characters to add.

    strcmp() function compares string contents, but not string addresses.
    if it returns value 0 - two strings are same and nonzero otherwise.
    if it returns value < 0 - str1 < str2
    if it returns value > 0 - str1 > str2

    strncmp() function compares the strings untill they differ or untill it has compared a no of characters specified by a third argument.
    ex string - astro, so limit the search to first 5 characters.
    strncmp("astronomy", "astro", 5);

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
 
int main()
{
    //Declarations
    int len;
    bool cmp;

    //String assignments
    char mystr[] = "hello there!";
    char str1[] = "Hello dude!";
    char str2[] = " Ahh General Kenobi";
    char str0[100];
    char str00[100];

    // Functions
    len = strlen(mystr);                                    // Length function
    
    strncpy(str0, mystr, sizeof(str0)-1);                   // Copy function
    
    strncpy(str00, strcat(mystr, str2), sizeof(str00)-1);   // Concatenate function
    //strncpy(str00, strncat(mystr, str2, 20), sizeof(str00)-1);

    cmp = strcmp(mystr, str1);                              // Compare function

    // print o/p
    printf("String length: %d\n", len);
    printf("String copied I: %s\n", str0);
    printf("String copied II: %s\n", str0);
    printf("string concatenated: %s\n",str00);
    printf("string compared: %d\n",cmp);

    return 0;
}
