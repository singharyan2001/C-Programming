// Name: Aryan Singh
// Task 01 - Encryption and Decryption
/*
Link - https://www.youtube.com/watch?v=-lexb9VFCPM&ab_channel=Dr.ParagShukla
*/

// Header Files
#include<stdio.h>
#include<string.h>

void encrypt(char str[], int key)   //Encryption Function
{
    for(int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - key;
    }
}
void decrypt(char str[], int key)   //Decryption Function
{
    for(int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + key;
    }
}

int main()      //Main Function
{
    char str[100];
    int key = 0XAED;    //Key
    //int key = 12;
    printf("Enter you're message: ");
    scanf(" %s", str);
    encrypt(str, key);
    printf("Encrypted Message: %s\n", str);
    decrypt(str, key);
    printf("Decrypted Message: %s\n", str);
    return 0;
}