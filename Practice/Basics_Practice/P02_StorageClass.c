// Storage specifiers - auto, extern, static, register
/*

{
	//This is a Block
}

*/

#include<stdio.h>

// Function Prototype
void increment();
void next();   
void extern_increment();
void extern_decrement();

// Global Variables I Declarations
static int counter = 7;   // global static variable
int zz;

// Main Function
int main()
{
	/* Automatic storage class */
	// Storage - Memory
	// Deafult initial Value - An unpredictable value i.e garbage value.
	// Scope - Local to the block in which the variable is defined.
	// Life - lifespan of the variable; Till the control remains within the block in which the variable is defined.
	// Test 1
	printf("Auto Storage Class Implementation \n");
	
	auto int i,j;
	printf("%d %d\n",i,j);
	
	// Test 2
	
	auto int x = 1;
	{
		auto int x = 2;
		{
			auto int x = 3;
			printf("%d\n", x);
		}
		printf("%d\n", x);
	}
	printf("%d\n",x);
	
	printf("-------------------------------------------------------------------\n");
	/* Register Storage Class */
	/* 
	Storage - CPU Registers
	Deafult initial Value - An unpredictable value i.e garbage value.
	Scope - Local to the block in which the variable is defined.
	Life - lifespan of the variable; Till the control remains within the block in which the variable is defined.
	Advantage - Value stored in CPU Registers can always be accessed faster than the one that is stored in memory.
	Applications - Mission Critical systems or time critical systems - Hard Embedded Systems like Airbag Systems, Missile guided Systems.
	good example - frequently used variables such as loop counters
	*/
	printf("Register Storage Class Implementation \n");
	
	register int Z;
	for(Z = 1; Z<=10;Z++){
		printf("%d\n",Z);
	}
	
	printf("-------------------------------------------------------------------\n");
	/* Static Storage Class */
	// Storage - Memory
	// Deafult initial Value - Zero
	// Scope - Local to the block in which the variable is defined.
	// Life - Value of the variable persists between different function calls.
	printf("Static Storage Class Implementation \n");
	
	increment();											// Function Call
	increment();											// Function Call
	increment();											// Function Call
	
	printf("\n");
	
	while(counter < 10)
	{
		next();
		counter++;
	}
	
	printf("-------------------------------------------------------------------\n");
	/* External Storage Class */
	// Storage - Memory
	// Deafult initial Value - Zero
	// Scope - Global
	// Life - As long as the program's execution doesn't come to as end.
	printf("External Storage Class Implementation \n");
	// Test 1
	printf("\nzz = %d\n",zz);
	extern_increment();
	extern_increment();
	extern_decrement();
	extern_decrement();
	
	printf("\n");
	
	// Test 2
	extern int first, last; /*Use global Variables*/
	printf("first Value: %d ; Last Value:  %d \n", first, last);
	printf("-------------------------------------------------------------------\n");
	return 0;
}
// Global Variable II
int first = 10, last = 20;

// Function Definitions
void increment()
{
	auto int G = 1;
	static int H = 1;
	G += 1;
	H += 1;
	printf("%d %d\n", G,H);
}

void next()
{
	static int iteration = 1;  // Local Static Variable
	iteration ++;
	printf("Iteration = %d and counter = %d \n", iteration, counter);
}

void extern_increment()
{
	zz += 1;
	printf("on incrementing zz = %d\n",zz);
}

void extern_decrement()
{
	zz -= 1;
	printf("on decrementing zz = %d\n",zz);
}

