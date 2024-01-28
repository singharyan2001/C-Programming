/*
    Functions - order passing of arguments - Always Right to left
    Part 2 - Library Functions
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int A = 1;
    printf("Value: %d %d %d\n", A, ++A, A++);
    // Library functions
    float a = 0.5;
    float w,x,y,z;
    w = sin(a);
    x = cos(a);
    y = tan(a);
    z = pow(a,2);
    printf("Values:\nW is %f\nX is %f\nY is %f\nZ is %f\n", w,x,y,z);
    return 0;
}