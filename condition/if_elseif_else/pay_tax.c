#include<stdio.h>

int main() {
	int income, mon_exp, net_income;
	float tax;
	
	printf("Income: Rs. ");
	scanf("%d", &income);
	
	printf("Monthly Expense: Rs. ");
	scanf("%d", &mon_exp);
	
	net_income = income - mon_exp;
	
	if (net_income <= 10000) {
		printf("You have not to pay any tax because your net incom is Rs. %d/-", net_income);
	} else if ((net_income <= 15000) && (net_income > 10000)) {
		tax = (net_income - 10000) * 0.1;
	} else if (net_income > 15000) {
		tax = 10000 * 0 + 5000 * 0.1 + (net_income - 15000) * 0.18;
	}
	
	if (net_income > 10000) {
		printf("Your income is: Rs.%d/-\n", income);
		printf("Your monthly mxpense is: Rs.%d/-\n", mon_exp);
		printf("Your net income is: Rs.%d/-\n", net_income);
		printf("Your playble tax amount is: Rs.%f", tax);
	}
	
	return 0;
}
