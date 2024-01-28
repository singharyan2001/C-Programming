// static example - 2

#include<stdio.h>

int main()  // Main Function; Entry point of the program
{
	int i;
	for(i=0; i < 5; i++)
	{
		int x = 5; // this is not static so x will be continuously reinitialized
		printf("x = %d\n", x);
		x--;
		//x -= 1;
	}
	for(i=0; i < 5; i++)
	{
		static int x = 5; // static local
		printf("x = %d\n", x);
		x--;
		//x -= 1;
	}
	return 0;
}
