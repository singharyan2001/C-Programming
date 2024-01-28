// pointers

#include<stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};
	int *ptr;
	ptr = &arr[5];
	int i;
	
	printf("\n",arr);	
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]); //data
		//printf("\n");
		printf("%p\n", &arr[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("The address of arr using *ptr++ is: %p\n", *ptr++); //address
		//printf("\n");
		printf("The data of arr using ++*ptr is: %d\n", ++*ptr);
	}
	
	return 0;
}
