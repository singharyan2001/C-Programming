// Data Types in C Language

#include<stdio.h>

int main()
{

	int a = 22; //signed integer - Size: 4 - Range: -2,147,483,648 to 2,147,483,647
	short int var1 = 22; //signed short integer - Size: 2 - Range: -32,768 to 32,767
	long int var2 = 2600; //signed long integer - Size: 4 - Range: -2,147,483,648 to 2,147,483,647
	
	unsigned int var3 = 344; //unsigned integer - Range: 0 to 4,294,967,295
	unsigned short int var4 = 233; //unsigned short int - Range: 0 to 65,535
	unsigned long int var5 = 83722; //unsigned long int - Range: 0 to 4,294,967,295
	
	float b = 673.44; //float - Size: 4 - Range: 1E-37 to 1E+37 with 6 digits of precision
	double d = 84.638; //double - Size: 8 - Range: 1E-37 to 1E+37 with 10 digits of precision  
	long double dd = 673.639; //long double - Size: 16
	
	char c = 'a';  //signed character - Range: -128 to 127
	unsigned char cc = 'A'; //unsigned character - Range: 0 to 255
	
	long long int iii = 8937389273937; //signed long long integer - Size: 8
	unsigned long long int uiii = 6348236733874934930; //unsigned long long integer - Size: 8
	
	printf("int: %d ; size: %d \n", a, sizeof(a));							//int data
	printf("signed short int: %hi ; size: %d\n", var1, sizeof(var1));			//short int data
	printf("signed long int: %ld ; size: %d \n", var2,sizeof(var2));			//signed long int data
	printf("=============================================\n");
	printf("unsigned int: %i ; size: %d \n", var3, sizeof(var3));			//unsigned int data
	printf("unsigned short int: %hu ; size: %d \n", var4, sizeof(var4));		//unsigned short int data
	printf("unsigned long int: %lu ; size: %d \n", var5, sizeof(var5));		//unsigned long int data
	printf("=============================================\n");
	printf("float: %f ; size: %d \n", b, sizeof(b));						//float data
	printf("Double: %lf ; size: %d \n", d, sizeof(d));						//double data
	printf("long Double: %Lf ; size: %d \n", dd, sizeof(dd));				//long double data
	printf("=============================================\n");
	printf("Character: %c ; size: %d \n", c, sizeof(c));					//signed character data
	printf("unsigned char: %c ; size: %d \n", cc, sizeof(cc));				//unsigned character data
	printf("=============================================\n");
	printf("long long: %lli ; size: %d\n",iii, sizeof(iii)); //signed long long
	printf("unsigned long long: %llu ; size: %d\n",uiii, sizeof(uiii)); //unsigned long long
	printf("=============================================\n");
	return 0;
}
