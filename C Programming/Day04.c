// Example of extern keyword
#include<stdio.h>
//int first, last;

//int first = 10;
//int last = 20;
int main()
{
	extern int first, last; /*Use global Variables*/
	//int first, last;
	printf("%d %d \n", first, last);
	return 0;
}
/*global definition of first and last*/
int first = 10, last = 20;
