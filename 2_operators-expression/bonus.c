#include<stdio.h>
int main() {
	
	int salary;
	
	printf("Enter your salary amount: ");
	scanf("%d", &salary);
	
	salary < 10000 ? printf("%d salary is less than 10000 so you will get bonus, Coungrates.", salary) : printf("%d salary is more than 10000 so you will not get bonus, Sorry." ,salary);
	
	return 0;
}
