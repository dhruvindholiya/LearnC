
#include<stdio.h>

int primeNum() {
	int num, i, prime = 0;
	
	printf("Please enter any number: ");
	scanf("%d", &num);
	
	if (num > 1) {
		if (num == 2) {
			printf("prime number = ");
		} else {
			for (i = 2; i < num; i++) {
				if (num % i == 0) {
					prime = 1;
					break;
				}
			}
			if (prime == 0) {
				printf("\nprime number = ");
			} else {
				printf("\nnot prime number = ");
			}
		}
	} else {
		printf("Added number is should more than 1.");
	}
	
	return num;
}

int main() {
	
	int res = primeNum();
	printf("%d", res);
	
	
	return 0;
}
