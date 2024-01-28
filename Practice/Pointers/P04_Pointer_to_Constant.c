// pointer to constant
// A Pointer to constant means you can change the pointer variable itself(address)
// but you can't change the value(data) it points to. 

#include<stdio.h>

void char_count(const char *str); // function prototype

int main()
{
    char_count("Aryan Singh"); 
    printf("\n");
    // Pointer to Const
    const int a = 10;
    const int b = 50;
    const int * ptr1 = &a;
    printf("Address stored in pointer before change : %p\n", ptr1);
    printf("Value stored in that address before change : %d\n\n", *ptr1);
    ptr1 = &b;
    printf("Address stored in pointer after change : %p\n", ptr1);
    printf("Value stored in that address after change : %d\n\n", *ptr1);
    return 0;
}

void char_count(const char *str) //this constant pointer starts pointing to the data
{
    int count = 0;
    while(*str)
    {
        if(*str == ' ')
        {
            printf("%c",*str);
        }
        else
        {
            printf("%c",*str);
            count++;
        }
        str++;
    }
    printf("\ncount value is: %d\n", count);
}