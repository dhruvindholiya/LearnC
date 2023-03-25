#include<stdio.h>
int main () {
	
	int i, month_from, month_to, salary, elec, mkt, total_exp;
	
	printf("From which month you want to calculate the expenses: ");
	scanf("%d", &month_from);
	
	printf("To which month you want to calculate the expenses: ");
	scanf("%d", &month_to);
	
	if (month_from <= month_to) {
		for (i = month_from; i <= month_to; i++) {
			
			printf("\n-------\nMONTH:%d\n-------\n",i);
			
			printf("Salary: Rs.");
			scanf("%d", &salary);
			
			printf("Electricity expense : Rs.");
			scanf("%d", &elec);
			
			printf("Marketing expense: Rs.");
			scanf("%d", &mkt);
			
			total_exp = salary + elec + mkt;
			printf("\nYour monthly expense: Rs.%d/-\n", total_exp);
		}
		printf("\nYou can see here all your total monthly expenses month wise.\n");
		for (i = month_from; i <= month_to; i++) {
			printf("%d - Rs.%d/-\n", i, total_exp);
		}
	} else {
		printf("Sorry - We can not calculate expense.");
	}
	
	return 0;
}
