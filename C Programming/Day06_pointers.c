// Pointers

#include<stdio.h>

#include<stdio.h>

int main()
{
	int i;
	//Array Initialization
	char name[5] = {'A','R','Y','A','N'};
	//printf("\n",name);	
	for(i = 0; i < 6; i++)
	{
		printf("%c", name[i]); //data
		//printf("\n");
	}
	printf("\n");
	printf("--------\n");
//	printf(name);
	
	for(i = 0; i < 5; i++)
	{
		printf("%p\n", &name[i]); //Address
	}
	printf("--------\n");
	for(i = 0; i < 5; i++)
	{
		printf("%p\n", (name+i)); //Address
	}
	printf("--------\n");
	for(i = 0; i < 5; i++)
	{
		printf("%c\n", *(name+i)); //pointer to array gives the data
	}
	printf("--------\n");
	int arr[5] = {1,2,3,4,5};
	printf("%d\n", arr[1]);
	printf("%d\n", arr[100]);
	printf("--------");
	return 0;
}
