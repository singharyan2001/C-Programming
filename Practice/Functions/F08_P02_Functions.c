/*
    Functions - Practice 2
*/
#include<stdio.h>

float square(float, float);

int main()
{
    float a,s,b;
    s = 3.0;
    printf("Enter any number: ");
    scanf("%f", &a);
    b = square(a,s);
    printf("Square root of %.2f is %.2f\n", a, b);
    return 0;
}

float square(float x, float y)
{
    float z;
    z = x*y;
    return (z,13);
}