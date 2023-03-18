#include<stdio.h>

int main() {
	char gender;
	int salary, bonus, totle_salary;
	
	printf("Enter your gender M(male) or F(female): ");
	scanf("%c", &gender);
	
	switch (gender) {
		case 'M':
			printf("Enter your salary: Rs. ");
			scanf("%d", &salary);
			if (salary < 10000 && salary > 0) {
				
				bonus = salary * 0.2;
				totle_salary = salary + bonus;
				
				printf("Your salary: Rs. %d/-\n", salary);
				printf("Your bonus: RS. %d/-\n", bonus);
				printf("Your totle_salary: Rs. %d/-", totle_salary);
			} else {
				printf("\nSorry, You can not get bonus because your salary should more than Rs.0/- otherwise less than Rs.10000/-.");
			}
			break;
		case 'F':
			printf("Enter your salary: Rs. ");
			scanf("%d", &salary);
			if (salary < 10000 && salary > 0) {
				
				bonus = salary * 0.3;
				totle_salary = salary + bonus;
				
				printf("Your salary: Rs. %d/-\n", salary);
				printf("Your bonus: RS. %d/-\n", bonus);
				printf("Your totle_salary: Rs. %d/-", totle_salary);
			} else {
				printf("\nSorry, You can not get bonus because your salary should more than Rs.0/- otherwise less than Rs.10000/-.");
			}
			break;
		default:
			printf("\nINVALID - Please check your added input.");
			break;
	}
	return 0;
}
