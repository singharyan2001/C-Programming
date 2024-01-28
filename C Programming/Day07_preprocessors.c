// functions in #define or function like macro

#include<stdio.h>
#define r_area(length,breadth) (length*breadth)   // Macro Function

void main()
{
	int len, bred, area;
	printf("Enter the length of rectangle: ");
	scanf("%d", &len);
	printf("Enter the breadth of rectangle: ");
	scanf("%d", &bred);
//	len = 10;
//	bred = 5;
//	int area;
	area = r_area(len,bred);
	printf("The area of reactangle is %d\n", r_area(len,bred));
	printf("The area of reactangle is %d\n", area);
}
