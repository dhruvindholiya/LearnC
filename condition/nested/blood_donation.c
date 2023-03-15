#include<stdio.h>

int main () {
	
	int age, weight;
	
	printf("Age: ");
	scanf("%d", &age);
	
	if (age >= 18) {
		printf("Weight: ");
		scanf("%d", &weight);
		if (weight >= 50) {
			printf("You are able for blood donation.");
		} else {
			printf("Sorry, You are not able for blood donation beacuse your weight %d is under to 50KG.", weight);
		}
	} else {
		printf("Sorry, You are not able for blood donation beacuse your age %d is under to 18 year.", age);
	}
	
	return 0;
}
