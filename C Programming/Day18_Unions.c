//Unions

#include<stdio.h>
#include<string.h>

union new
{
    int a;
    char b;
    // char b[10];
    float c;
    double d;
};

int main()
{
    union new z, *ptr, arr[12]; //arr size would be 12*8=96
    ptr = &z;
    ptr -> a = 77;
    ptr -> c = 55.69;

    z.a = 999;
    printf("value: %d\n", z.a);
    printf("Address %p\n", &z.a);
    printf("Size: %d\n", sizeof(z.a));
    z.b = 'A';
    // strcpy(z.b,"Aryan");
    printf("value: %c\n", z.b);
    printf("Address %p\n", &z.b);
    printf("Size: %d\n", sizeof(z.b));
    z.c = 45.99;
    printf("value: %f\n", z.c);
    printf("Address %p\n", &z.c);
    printf("Size: %d\n", sizeof(z.c));
    z.d = 1000.6798;
    printf("value: %lf\n", z.d);
    printf("Address %p\n", &z.d);
    printf("Size: %d\n", sizeof(z.d));
    printf("\n");

    printf("Size of z: %d\n", sizeof(z));

    printf("\n");
    printf("value: %d\n", z.a);
    printf("Address %p\n", &z.a);
    printf("Size: %d\n", sizeof(z.a));

    printf("value: %c\n", z.b);
    printf("Address %p\n", &z.b);
    printf("Size: %d\n", sizeof(z.b));

    printf("value: %f\n", z.c);
    printf("Address %p\n", &z.c);
    printf("Size: %d\n", sizeof(z.c));

    printf("value: %lf\n", z.d);
    printf("Address %p\n", &z.d);
    printf("Size: %d\n", sizeof(z.d));

    return 0;
}
