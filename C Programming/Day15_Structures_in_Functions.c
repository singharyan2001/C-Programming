// using structure as an argument in a function

#include<stdio.h>

struct Employee{
	int idNum; double payRate; double hours;
};

//double calcNet(struct Employee temp);
double calcNet(struct Employee *);
typedef struct Employee Aryan;

int main()
{
//	struct Employee emp = {6782, 6.77, 42.5};
	Aryan emp = {6782, 6.77, 42.5};
	double netPay;
	//netPay = calcNet(emp);
	netPay = calcNet(&emp);
	printf("The net pay of emp is: %d is %6.2f", emp.idNum, netPay);
	
	return 0;
}

//double calcNet(struct Employee temp)
//{
//	return((temp.payRate*temp.hours));
//}

//double calcNet(struct Employee *ptr)
//{
//	return((ptr->payRate * ptr->hours));
//}

double calcNet(Aryan *ptr)
{
	return((ptr->payRate * ptr->hours));
}
