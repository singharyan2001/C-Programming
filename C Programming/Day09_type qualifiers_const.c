// type qualifiers - const
#include<stdio.h>

int main()
{
	const int a = 9; // explicit initilization of a constant
	int b = 12;
	printf("Value of a is %d and value of b is %d", a,b);
	a = a+1; // this will generate an error saying "assignment of read only variable"
	b = b+1;
	printf("Value of a is %d and value of b is %d", a,b);
	return 0;
}
