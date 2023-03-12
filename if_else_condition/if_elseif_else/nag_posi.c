#include<stdio.h>

int main() {
	
	float a;
	
	printf("Enter any value: ");
	scanf("%f", &a);
	
	if (a > 0) {
		printf("%f is positive value", a);
	} else if (a < 0) {
		printf("%f is nagative value", a);
	} else {
		printf("%f is zero", a);
	}
	
	return 0;
}
