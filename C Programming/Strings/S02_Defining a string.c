/*
    Topic - defining a string

    strings in C are stored in an array of type char
    
    characters in a string are stored in adjacent memory cells, one character per cell
    
    To declare a string in  C, simply use the char type and the brackets to idicate size
    ex. char mystring[20];
    this variable can accommodate a string that contains a string that contains upto 19 characters
    you must allow one element for the termination character (NULL Character)
    The compiler automatically adds \0 to the end of the string constant

    You cannot assign arrays in C, also you cannot assign strings either.
    ex. char s[100]; // declare
    s = "hello"; // initilize - doesn't work - lvalue required error

    If you are performing an assignment operation, you cannot assign one array of characters to another array of characters
    you have to use strcpy() to assign a value to char array after it has been declared or initialized.

    %s format specifier is for outputting a null-terminated string.

    you cannot directly test two strings to see if they are equal with a statement such as if(str1 == str2).
    the equality operator works only on simplified variable types such as int, float char, but does not work on structures or arrays

    To determine if two strings are equal, you must explicitly compare the two character strings by character
    i.e strcmp() function is used.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    // initializing strings
    // Method 1
    char word[] = {'H','E','L','L','O','!'};
    // Method 2
    char word2[] = "Hello there!";
    // Method 3
    char word3[7] = {"Hello!"};
    char xx[100];
    //xx = "hsdked";

    //print
    printf("Method 1: %s\n", word);
    printf("Method 2: %s\n", word2);
    printf("Method 3: %s\n", word3);
    //printf("M: %s\n", xx);
    printf("M: %c\n", word[2]);

    // Inputing a string
    char ipstr[100];
    printf("Enter message: ");
    scanf(" %s", ipstr);    
    // with the scanf when you do a string, scanf is only going to read untill space.
    // to read strings with spaces, we can use functions like fgets which is another way to read input from the keyboard
    // that will read the entire string regardless of spaces.
    printf("Message received: %s\n", ipstr);

    return 0;
}

/*
    Note:
    the string constant "x" is not the same as the character constant 'x'
    'x' is a basic type (char)
    "x" is a derived type, an array of char
    "x" really consists of two characters, 'x' and '\0', the null character.
*/