#include<stdio.h>

int main()
{
// Input/Output Program in C Language
	int i,j;
	char ch;
	printf("Please enter two numbers: \n");
	scanf("%d %d",&i,&j);
	printf("You have inputted i = %d j = %d",i,j);
	printf("\nPlease enter a character: \n");
	scanf(" %c", &ch); // space included, without space it will not work - due to a bug present in C Language
	printf("You have inputed ch = %c", ch);

// Type Casting
	int num1, num2;
	float result;
	num1 = 5, num2 = 2;
	result = (float)num1/num2;
	printf("\nresult=%f", result);
	return 0;
} 

