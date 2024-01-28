// use of function realloc, free

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *ptr;
	ptr = malloc(17);  //allocating 17 bytes
	printf("%p\n", ptr); //printing the address
	if(!ptr)			//malloc, calloc, realloc
	{
		printf("Allocation Error\n");
		exit(1);
	}
	printf("Test\n");
	strcpy(ptr, "This is 16 chars");  //strlen - 17 (including \0)
	ptr = realloc(ptr, 18);			  // reallocates 18 bytes from the starting address
	if(!ptr)
	{
		printf("Allocation Error\n");
		exit(1);
	}
	strcat(ptr, ".");
	printf(ptr);
	printf("\n");
	free(ptr);
	//*ptr = "Hello";
	//printf(ptr);
	ptr = NULL; //Important step
	return 0;
}

