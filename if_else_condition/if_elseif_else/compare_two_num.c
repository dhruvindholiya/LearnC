#include<stdio.h> 

int main() {
	
	int no1, no2;
	
	printf("Please enter first number: ");
	scanf("%d", &no1);
	
	printf("Please enter second number: ");
	scanf("%d", &no2);
	
	if (no1 < no2) {
		printf("Result: First value %d is less than to second value %d.", no1, no2);	
	} else if (no1 > no2) {
		printf("Result: First value %d is more than to second value %d.", no1, no2);
	} else {
		printf("Result: First value %d and second value %d both of same.", no1, no2);
	}
	
	return 0;
}
