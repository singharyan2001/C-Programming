/*
    Topic: Constant String
    Constant string is used when you do not want your values of your variable to ever change.

    The #define is a preprocessor that lets you define constants.
    The defined name is not a variable, you cannot assign a value to it
    The define statement helps to make programs more portable.

    The #define statement can be used for character and string constants
    #define BEEP '\a'
    #define TEE 'T'
    #Define OOPS "Now you have done it!"

    C90 added a second way to create symbolic constants using the const keyword
    third way to create symbolic constants is through enums

    Initilizing a char array and declaring it as a constant is a good way of handling messages.
    ex. const char message[] = "The end of the world is nigh.";
    so if you declare a message as const, it's protected from being modified explicitly within the program. any attempt to do so will result in error message from the compiler.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define pi 3.14159
#define diameter 2
#define taxrate 0.015

int main()
{
/*    
    // Example
    double pi = 3.14159;
    double diameter = 2;
*/
    double circumference;
    circumference = pi * diameter;

    printf("Circumference is: %f\n", circumference);

    // Example 2
/*    
    double taxrate = 0.015;
    int housevalue = 80000000;
*/
    const int housevalue = 80000000;
    double owned;
    owned = taxrate*housevalue;
    printf("owned -> %f\n", owned);

    // Note: if you have used a constant in several places, and it becomes necessary to chane its value, you only need to alter the definition of the symbolic constant
    
    // Constant strings

    const char message[] = "Welcome to AAA";
    printf("\nMessage: %s\n\n", message);

    return 0;
}