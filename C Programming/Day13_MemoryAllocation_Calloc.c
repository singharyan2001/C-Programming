// Example of Calloc function usage -- int, float
/*
calloc function has two arguments.
first argument is number of memory blocks to be allocated
second argument is the size of each block in bytes.
*/
// In Calloc function all values are initialized to zero

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	float *ptr;
	ptr = calloc(10, sizeof(float));
	if(!ptr)
	{
		printf("Allocation Error\n");
		exit(1); //stop executing the program
	}
	else
	{
		for(i=0; i<10; i++) //displays initial values
		{
			printf(" %f", *(ptr+i));
		}
		printf("\n");
		
		for(i=0; i<10; i++)  //storing new values in the block of memory
		{
			*(ptr+i) = 3.14*i;
		}
		
		for(i=0; i<10; i++)
		{
			printf(" %f", *(ptr+i));
		}
	}
	return 0;
}
