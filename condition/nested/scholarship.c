#include<stdio.h>

int main() {
	char cast, grade;
	int fees, scholarship, totle_fees;
	float cgpa;
	
	printf("Enter your cast on based to given here.\n - O for Open\n - B for OBC\n - S for SC\n - T for ST\nPlease enter your cast here: ");
	scanf("%s", &cast);
	
	if (cast == 'O') {
		printf("Sorry, Your cast is %c (Open) so you can not get Scholarship.", cast);
	} else if (cast == 'B' || cast == 'S' || cast == 'T') {
		printf("CGPA: ");
		scanf("%f", &cgpa);
		
		if (cgpa > 9 && cgpa <= 10) {
			grade = 'A';
		} else if (cgpa > 8.5 && cgpa <= 9) {
			grade = 'B';
		} else if (cgpa > 8 && cgpa <= 8.5) {
			grade = 'C';
		} else if (cgpa > 7.5 && cgpa <= 8) {
			grade = 'D';
		}
		
		if (grade >= 'B') {
			printf("Fees: ");
			scanf("%d", &fees);
			
			if (cast == 'B') {
				scholarship = fees * 0.25;
			} else if (cast == 'S') {
				scholarship = fees * 0.50;
			} else if (cast == 'T') {
				scholarship = fees * 1;
			}
			
			totle_fees = fees - scholarship;
	
			printf("\nYour Fees : Rs. %d/-\n", fees);
			printf("Your CGPA is: %f\n", cgpa);
			printf("Your Scholarship: Rs. %d/-\n", scholarship);
			printf("Your Payable fees: Rs. %d/-\n", totle_fees);
		} else {
			printf("Sorry, Your CGPA should more than 8.5+ and less than or euqal to 10.");
		}
	} else {
		printf("INVALID - Please check your added input.");
	}
	
	
	
	return 0;
}
