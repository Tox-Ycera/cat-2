/*PRECIOUS WAITHERA
CT101/G/24685/24*/
#include <stdio.h>

struct employee{
	char name[25];
	int Employee_ID;
	char Department[20];
	float salary;
	char email[50];
	}employee;

int main(){
	struct employee employee ={
		"Joe Doe",
		12345,
		"Human Resource",
		55000.50,
		"john.doe@company.com"
	};
	
	printf("name: %s\n",employee.name);
	printf("Employee_ID: %d\n",employee.Employee_ID);
	printf("Department: %s\n",employee.Department);
	printf("salary: %2f\n",employee.salary);
	printf("email: %s\n",employee.email);
	return 0;
}
