// enum - user defined data type

#include<stdio.h>

enum colors{red,blue,yellow};  // by default - value is 0, then incremented by 1 for each value
//enum colors{red = 31, blue = 45, yellow}; 
// a global list is created using enum
// initialization of enum
// increment happens by 1, from the previous variable value
int main()
{
	enum colors select;  //declaration
	select = yellow;     //definition
	printf("\nselect=%d ; size: %d\n", select, sizeof(select));
	return 0;
}

