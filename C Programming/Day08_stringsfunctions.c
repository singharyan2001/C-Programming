// string functions available in c
#include<stdio.h>
#include<string.h>
//strlen - used to get the length of the string
//strcmp - used to compare the string length and if equal then checks the characters in the string.
//		   if equal, the strcmp returns a zero; if not equal, the strcmp function returns a one.
//strcat - used to append two strings.
//		   the function takes in two arguments i.e 2 strings and appends them; string 2 is attach to the end of string 1
//strcpy - used to copies the string by source(inclding the null character) to destination.		   
//	  	   the function also returns the copied string. 
//strchr - finding a single character in a string
//strstr - finding a string/group of characters in a string

int main()
{
	char s1[80], s2[80];
	scanf(" %s", s1);
	scanf(" %s",s2);
	
	printf("lengths: %d %d\n", strlen(s1), strlen(s2));
	if(strcmp(s1,s2))
	{
		printf("The strings are not equal\n");
	}
	else
	{
		printf("The strings are equal\n");
	}
	strcat(s1,s2);
	printf("%s\n",s1);
	
	strcpy(s1, "This is a test.\n");
	printf(s1);
	
	if(strchr("hello",'e'))
	{
		printf("e is in hello\n");
	}
	if(strstr("hello there","hello"))
	{
		printf("found hello");
	}
	return 0;
}
