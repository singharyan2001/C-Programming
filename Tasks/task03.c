// Interview Questions
#include<stdio.h>
#include<stdlib.h>	// malloc function
#include<string.h>	// strcpy function

int main()
{
	// Interview Question 1
	int i, *ip, ar[5];
	ip = (int *)malloc(5*sizeof(int));	// assigning 20bytes
	ip = ar;							//reassigning the address; the 1st address is lost. There is a Memory Leakage of 20bytes.
	printf("%d\n", sizeof(ar));		//20
	printf("%d\n", sizeof(int));	//4
	for(i=0;i<sizeof(ar)/sizeof(int);i++)
	{
		scanf("%d",&ip[i]);
		printf("%d\n",*(ip+i)*5);
		printf("%d\n",*(ar+i)*5);
	}
	// Interview Question 2
	char s[256], *ptr;
	scanf("%s",s);
	ptr = (char *)malloc(strlen(s)+1);
	strcpy(ptr, s);
	printf("\n%s\n",ptr);
	
	return 0;
}
