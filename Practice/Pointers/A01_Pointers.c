// Pointers
// Pointers and Double pointers; call by value, call by reference

#include<stdio.h>

int main()
{
	int i = 5;		//Ordinary Variable
	printf("The Value of i is: %d\n", i);
	printf("The Memory Location/Address of i in RAM is: %u\n", &i);	//Using the %u format specifier to get the address in Integer form(unsigned).
	printf("The Memory Location/Address of i in RAM is: %p\n", &i); //Using the %p format specifier to get the address in Hexadecimal form (since the address is stored in Hex form)
	printf("----------------------------------------------\n");
	int *ptr;	//Pointer Variable
	ptr = &i;
	printf("The Value that the pointer variable ptr is pointing towards is: %d\n", *ptr);
	printf("The Memory Location/Address of pointer variable ptr in RAM is: %u\n", ptr);	//Using the %u format specifier to get the address in Integer form(unsigned).
	printf("The Memory Location/Address of pointer variable ptr in RAM is: %p\n", ptr); //Using the %p format specifier to get the address in Hexadecimal form (since the address is stored in Hex form)
	
	// different ways to access data and address

	//data
	printf("data: %d\n", i);
	printf("data: %d\n", *(&i));
	printf("data: %d\n", *ptr);
	printf("data: %d\n", ptr);
	printf("\n");

	//Address
	printf("Address: %p\n", &i);	// address of variable i
	printf("Address: %p\n", ptr);	//address stored in the pointer variable
	printf("Address: %p\n", &ptr);	//address of ptr

	//double pointers
	int **k;
	k = &ptr;

	printf("data: %d\n", i);
	printf("data: %d\n", *(&i));
	printf("data: %d\n", *k);
	printf("data: %d\n", k);
	printf("\n");

	//Address
	printf("Address: %p\n", &i);	// address of variable i
	printf("Address: %p\n", k);	//address stored in the pointer variable
	printf("Address: %p\n", &k);

	return 0;
}
