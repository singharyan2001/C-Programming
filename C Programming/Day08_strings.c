// strings

#include<stdio.h>
#include<string.h>

void mysub(char[]);

int main()
{
	char name[20] = "Aryan Singh";
	mysub(name);
}

void mysub(char text[])
{
	int len,k;
	len = strlen(text);
	printf("%d\n",len);
	for(k=0;k<len;k++)
	{
		printf("%c",text[k]);
	}
}

// output: length of the string; print the name
