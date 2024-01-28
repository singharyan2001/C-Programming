// Structures

#include<stdio.h>

int main()
{
	struct DATE
	{
		int day; int month; int year;
	};
	
	struct DATE birth;
	printf("size of struct date is %d\n", sizeof(birth));
	birth.day = 14;
	birth.month = 3;
	birth.year = 2001;
	printf("My Birthday is on %d-%d-%d", birth.day,birth.month,birth.year);
	
	return 0;
}
