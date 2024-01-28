// Day 05 - register variables

#include<stdio.h>
int a; //global variable
// cannot define global variable as register
// register variables cannot print the address as they are part of CPU Register
// register variables advantage is less processing time required
int main()
{
	register int b; // local variable
	printf("a=%d \n", a); // data printing
	printf("b=%d \n", b);
	{
		register int c;
		printf("c=%d \n", c); // inside block scope this work
	}
	// int c will not work outside this curly bracket
	return 0;
}

