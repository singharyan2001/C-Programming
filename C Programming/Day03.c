#include<stdio.h>

int main()
{
// for loops with no body
//	int i;
//	for(i=0; i<10;++i);
//	printf("value of i = %d", i);

// goto Statement
	int x = 1;
	loop1:
	x++;
	printf("Hello Aryan\t");
	if(x <= 10) goto loop1;	
	return 0;
}

