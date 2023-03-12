#include<stdio.h>

int main() {
	
	int num;
	
	printf("Enter any numbers: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("%d number is even", num);
	} else {
		printf("%d number is odd", num);
	}
	
	return 0;
}
