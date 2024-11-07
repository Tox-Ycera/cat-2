#include <stdio.h>
int main(){
	float Hours_worked, Gross_pay, Tax, Overtime_pay, Overtime_hours; 
	const float Hourly_rate = 12.00;
	const float Overtime_rate = 1.5;
	
	printf("Enter Hours_worked:");
	scanf("%f", &Hours_worked);
	
	if(Hours_worked <=40){
		Gross_pay = Hours_worked*Hourly_rate;
	}
	else{
		Overtime_hours = Hours_worked - 40;
		Overtime_pay = Overtime_hours*Hourly_rate*Overtime_rate;
		Gross_pay = 40*Hourly_rate + Overtime_pay;
	}
	if(Gross_pay <= 600){
		Tax = Gross_pay*0.15;
	}
	else{
		Tax=600*0.15 + (Gross_pay-600)*0.2;
	}
	printf("Gross_pay: %f\n", Gross_pay);
	printf("Tax: %f\n",Tax);
	
	return 0;
}

