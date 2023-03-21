#include<stdio.h>

int main() {
	
	int age;
	
	printf("Enter any value: ");
	scanf("%d", &age);
	
	age >= 18 ? printf("You are able for wotting") : printf("You are not able for wotting");
	
	return 0;
}
