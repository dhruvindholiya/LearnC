#include<stdio.h>

int main() {
	
	int salary;
	float tax_amt;
	
	printf("Please enter your salary amount: ");
	scanf("%d", &salary);
	
	if (salary >= 0) {
		if (salary > 2000 && salary <= 4000) {
			tax_amt = 2000 * 0 + (salary - 2000) * 0.03;
		} else if (salary > 4000 && salary <= 5000) {
			tax_amt = 2000 * 0 + 2000 * 0.03 + (salary - 4000) * 0.05;
		} else if (salary > 5000) {
			tax_amt = 2000 * 0 + 2000 * 0.03 + 1000 * 0.05 + (salary - 5000) * 0.08;
		}
		
		if (salary > 2000) {
			printf("Your salary: Rs. %d/-\n", salary);
			printf("Tax amount: Rs. %f/-\n", tax_amt);
		} else {
			printf("No tax deducation.");
		}
		
	} else {
		printf("INVALID - Please check your input.\n");
	}
	
	
	
	return 0;
}
