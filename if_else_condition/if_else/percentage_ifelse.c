#include<stdio.h>
int main() {
	
	int pct;
	
	printf("Enter your percentage hear so i can say to you that you are pass or not : ");
	scanf("%d", &pct);
	
	if (pct > 34) {
		printf("Your percentage is more than 34 so you are pass in the exam, Coungrates.");
	} else {
		printf("Your percentage is less than 34 so you are not pass in the exam, Sorry.");
	}
	
	return 0;
}
