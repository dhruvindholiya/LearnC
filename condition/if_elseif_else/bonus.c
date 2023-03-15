#include<stdio.h>

int main() {
	char gender;
	int salary, bonus, totle_salary;
	
	printf("Enter your gender M(male) or F(female) and salary: ");
	scanf("%c %d", &gender, &salary);
	
	if ((gender == 'm' || gender == 'M') && salary < 10000) {
		bonus = salary * 0.2;
	} else if ((gender == 'f' || gender == 'F') && salary < 10000) {
		bonus = salary * 0.3;
	}
	
	totle_salary = salary + bonus;
	
	if (salary < 10000 && salary > 0) {
		printf("Your salary: Rs. %d/-\n", salary);
		printf("Your bonus: RS. %d/-\n", bonus);
		printf("Your totle_salary: Rs. %d/-", totle_salary);
	} else if (salary < 0) {
		printf("INVALID - Your salary should be more than or equal to 0.");
	} else {
		printf("Sorry, Rs. %d is more than Rs.10000 so you can not get bonus.", salary);
	}
	
	return 0;
}
