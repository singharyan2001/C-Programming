// Pointers - 	Pointer to constant
/*
A pointer to a constant means you can change the pointer variable
itself(address) but you can change the value (data) it points to.
*/

#include<stdio.h>

void sp_to_dash(const char *str); // function prototype
//this function substitutes space with a dash

int main()
{
	/*char arr[30];
	arr = this is a test";
	sp_to_dash(arr)*/
	sp_to_dash("this is a test");
	printf("\n");
	return 0;
}

void sp_to_dash(const char *str)  //this const pointer starts pointing to the data thst would be
{
	while(*str) //here the Character's ASCII value is accessed
	{
		if(*str == ' ')
		{
			printf("%c",'-');
		}
		else
		{
			printf("%c", *str); //printing the actual character
		}	
		/*if(*str == 'T')
		{
			*str = 'w';
		}*/	
		str++; //increment the address by 8 bytes
	} //we are not changing the actual data, we are just referencing the data
}
