#include<stdio.h>

int main() {
	char gender;
	int salary, bonus_male, bonus_female;
	
	printf("Enter your gender M for Male and F for Female: ");
	scanf("%c", &gender);
	
	printf("Enter your salary: ");
	scanf("%d", &salary);
	
	if ((gender == 'm' || gender == 'M') && salary < 10000) {
		bonus_male = salary * 0.2;
		printf("Your bonus: %d", bonus_male);
	} else if ((gender == 'f' || gender == 'F') && salary < 10000) {
		bonus_female = salary * 0.3;
		printf("Your bonus: %d", bonus_female);
	} else {
		printf("Sorry %d is more than 10000 so you can not get bonus", salary);
	}
	
	return 0;
}
