// Constant Pointer
// here we cannot change the pointer variable itself(address), but we can change the address.

#include<stdio.h>

int main()
{
    // Constant Pointer
	int zz = 55;
    int *const ptr = &zz;
    
    printf("The Value of ptr is: %d\n", *ptr);
    printf("The Address of ptr is: %p\n", ptr);

    zz = 77;
    printf("The value of ptr is: %d\n", *ptr);
    printf("The Address of ptr is: %p\n", ptr);

    // int d = 99;
    // ptr = &d;
    // printf("The value of ptr is: %d\n", *ptr);

    *ptr = 11;
    printf("The value of ptr is: %d\n", *ptr);
    printf("The Address of ptr is: %p\n\n", ptr);

    return 0;
}


