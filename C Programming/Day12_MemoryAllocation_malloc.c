// example of malloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *ptr;	//pointer declaration
	ptr = malloc(10); //gets 10 bytes of data
	if(ptr == 0) //ptr ==0  (!ptr)
		printf("Out of memory. \n");
	else
	{
		printf("\nInitial value is: %s\n", ptr);
		scanf(" %s", ptr);
		printf("\nYou have inputted %s\n", ptr);
		printf("\nStarting address is %p \n", ptr);
	}
	return 0;
}
