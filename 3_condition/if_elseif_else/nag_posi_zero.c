#include<stdio.h>

int main() {
	
	float num;
	
	printf("Enter any number: ");
	scanf("%f", &num);
	
	if (num > 0) {
		printf("%f is positive number.", num);
	} else if (num < 0) {
		printf("%f is nagative number.", num);
	} else {
		printf("%f isn't either positive or nagative number.", num);
	}
	
	return 0;
}
