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
			printf("Sorry, You are not able for blood donation beacuse your weight: %dKg is under to 50KG.",age, weight);
		}
	} else {
		printf("Sorry, You are not able for blood donation beacuse your age: %d years is under to 18 years.", age);
	}
	return 0;
}
