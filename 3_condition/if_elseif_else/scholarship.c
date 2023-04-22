#include<stdio.h>

int main() {
	char cast, grade;
	int fees, scholarship, totle_fees;
	float cgpa;
	
	printf("Enter your cast on based to given here.\n - O for Open\n - B for OBC\n - S for SC\n - T for ST\n Please enter your cast here: ");
	scanf("%s", &cast);
	
	printf("CGPA: ");
	scanf("%f", &cgpa);
		
	printf("Fees: ");
	scanf("%d", &fees);
	
	if (cgpa > 9 && cgpa <= 10) {
		grade = 'A';
	} else if (cgpa > 8.5 && cgpa <= 9) {
		grade = 'B';
	} else if (cgpa > 8 && cgpa <= 8.5) {
		grade = 'C';
	} else if (cgpa > 7.5 && cgpa <= 8) {
		grade = 'D';
	}
	
	if (cast == 'O') {
		printf("Sorry, Your cast is %c (Open) so you can not get Scholarship.", cast);
	} else if (cast == 'B' && grade >= 'B') {
		scholarship = fees * 0.25;
	} else if (cast == 'S' && grade >= 'B') {
		scholarship = fees * 0.50;
	} else if (cast == 'T' && grade >= 'B') {
		scholarship = fees * 1;
	}
	
	totle_fees = fees - scholarship;
	
	printf("Your Fees is: Rs. %d/-\n", fees);
	printf("Your CGPA is: Rs. %f/-\n", cgpa);
	printf("Your scholarship is: Rs. %d/-\n", scholarship);
	printf("Your Payable fees is: Rs. %d/-\n", totle_fees);
	
	return 0;
}
