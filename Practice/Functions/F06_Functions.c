/*
    Functions - Return type of function
*/
#include<stdio.h>

float square(float);

int main()
{
    float a,b;
    printf("Enter any number: ");
    scanf("%f", &a);
    b = square(a);
    printf("Square root of %.2f is %.2f\n", a, b);
    return 0;
}

float square(float x)
{
    float y;
    y = x*x;
    return y;
}
