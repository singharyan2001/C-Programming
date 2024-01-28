// Task: WAP to print the factorial of a number using functions

#include<stdio.h>

// since factorial for negative numbers do not exists
unsigned int factorial(unsigned int);  // Function prototype

int main()  // Main Function; Entry point of the program
{
	unsigned int n;					 // Creating an unsigned integer variable to store the value received from the user
	unsigned int result = 0;		// Creating an unsigned integer variable to store the result of the Called Function
	printf("Enter the Number: ");  // display on output screen
	scanf("%u", &n);     		  // Read the number inputed from the user side
	result = factorial(n);		 // Calling factorial function
	printf("Factorial of number %u is %u", n, result);  // Displaying the inputed number and its factorial
}

unsigned int factorial(unsigned int num)		// Function Definition
{
	unsigned int i;
	unsigned int nn = 1;
	if(num == 0 | num == 1)
	{
		return 1;
	}
	else
	{
		for(i = 1; i <= num; i++)
		{
			nn *= i;
		}
		return nn;
	}
}

