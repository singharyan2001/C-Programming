// static example - 1

#include<stdio.h>

void next();   // Function Prototype
static int counter = 7;   // global static variable
void main()
{
	while(counter < 10)
	{
		next();
		counter++;
	}
}

void next()
{
	static int iteration = 1;  // Local Static Variable
	iteration ++;
	printf("Iteration = %d and counter = %d \n", iteration, counter);
}
