/*
    Topic - strings
    char - 1 byte
    with single quotes - you have character
    with double qoutes - you have a list of characters or string
    strings end with a \0, which helps the compiler to understand that the string has ended.
    A null character is a special character with the code value 0 is added to the end of each string to mark where it ends.
    null character - /0
    A null character is a string eliminator
    A NULL is a symbol that represents a memory address that doesn't reference anything.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    char singleQ = 'A';
    char strings[20] = "Hello There!";
    //char *ptr = &strings;
    printf("char with single qoutes is considered a character: %c\n", singleQ);
    printf("char with Double qoutes are considered strings: %s\n", strings);
    printf("for\"you write\\\".");
    // explaination for the output - escape sequences 
    // for printing double qoutes as a string - \"
    // for printing a backslash as a string - \\
    // since a single backslash is considered an escape sequence by the compiler.
    printf("\nThe character \0 is used to terminate a string\n");
    return 0;
}