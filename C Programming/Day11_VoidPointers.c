// void pointers

#include<stdio.h>

int main()
{
	int a = 5;
	void*ptr;
	ptr = &a;
	*(int *)ptr = 10;
	printf("The Value of a is: %d at %p\n", a, &ptr);
	
	char b = 'A';
	ptr = &b;
	*(char *)ptr = 'Z';
	printf("The Value of b is: %c at %p\n", b, &ptr);
	
	return 0;
}
// here the address is being changed and by using type casting
// we are able to access different types of data using the void pointer.
// without creating new pointer variables. Hence saving space and time.

