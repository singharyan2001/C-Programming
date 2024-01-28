//use of pointer to a function

#include<stdio.h>
#include<string.h>

//int strcmp(const char *str1, const char *str2);  // function prototype

int main()
{
	char s1[80], s2[80];
	int y;
	/* Function pointer declaration */
	int (*ptr)(const char *, const char *);
	ptr = &strcmp; // assign address of strcmp to ptr
	printf("Enter two strings: \n");
	scanf(" %s", s1);
	scanf(" %s", s2);
	y = ptr(s1,s2);
	//y = strcmp(s1,s2);
	printf("Address of ptr is: %p\n", ptr);
	if(!y)
		printf("Strings are Equal\n");
	else
		printf("The strings are not Equal\n");
		
    return 0;
}
