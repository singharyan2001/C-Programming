// pointers

#include<stdio.h>

int main()
{
	int x;		//Memory is allocated in the RAM for an integer variable.  
	int *ptr;	//Memory is allocated in the RAM for a Pointer variable that is of size 8 Bytes; A pointer variable stores the address of a variable.
	ptr = &x;	//The address of x is stored in ptr
	x = 5;		//An integer value 5 is stored in the variable x
	
	printf("The address of x is: %p\n", &x);		//prints the address of x
	printf("The address of ptr is: %p\n", &ptr);	//prints the address of the pointer variable 'ptr'
	printf("The Address stored in the pointer variable 'ptr' is: %p\n", ptr);
	
	printf("the value of x is: %d\n", x);			//prints the value of x
	printf("the value stored in *ptr is: %d\n", *ptr);		//prints the value that the pointer variable is pointing/referencing towards.
	
	printf("The Memory allocated in the RAM for a pointer variable 'ptr' is: %d\n", sizeof(ptr));

	return 0;
}
