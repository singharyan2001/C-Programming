// Double pointers

#include<stdio.h>

int main()
{
    int x, *ptr, **ptr1;
    x = 10;
    ptr = &x;
    ptr1 = &ptr;
    printf("%d\n", *ptr);
    printf("%d\n", **ptr1);
    printf("%p\n", ptr);
    printf("%p\n", *ptr1);
    printf("%p\n", ptr1);
    return 0;
}