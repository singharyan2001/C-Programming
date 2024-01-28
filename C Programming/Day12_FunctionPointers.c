// Function Pointer

#include<stdio.h>

void display(int);  // function prototype

int main()
{
    display(20);
    void (*dp)(int); // function pointer declaration
    dp = &display; // finding the function address
    printf("%p\n",dp);
    dp(10);

    return 0;
}

void display(int a)
{
    printf("The Value of a is: %d\n", a);
}