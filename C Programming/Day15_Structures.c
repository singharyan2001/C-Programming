// Array of structures

#include<stdio.h>

struct PayRecord{
	long id;
	char name[20];
	float rate;
};

int main()
{
	int i;
	struct PayRecord employee[5] =
	{
		{1001, "Suresh", 6.55},
		{1002, "Ashok", 7.45},
		{1003, "Shyam", 6.76},
		{1004, "Yogesh", 5.45},
		{1005, "Rahul", 8.72}
	};
	
	for(i = 0; i<5;i++)
	{
		printf("%ld %-20s %4.2f \n", employee[i].id, employee[i].name, employee[i].rate);
	}
	return 0;
}
