// string manipulation

#include<stdio.h>

int main()
{
	char name1[20] = "Aryan";
	char name2[20] = "Pravin";
	printf("\t%s %s\n",name1, name2);
	name1[3] = '\0';
	printf("\t%s %s\n",name1, name2);
	return 0;
}

// name1,name2 is the starting address of the string
