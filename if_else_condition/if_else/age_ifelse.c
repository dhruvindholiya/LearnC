#include<stdio.h>

int main() {

	int age;

	printf("Enter any value: ");
	scanf("%d", &age);

	if (age >= 18) {
		printf("You are able for wotting");
	} else {
		printf("You are not able for wotting");
	}

	return 0;
}
