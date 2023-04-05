#include<stdio.h>

int main () {
	
	int num, i, flag = 0;
	
	printf("Please enter any number: ");
	scanf("%d", &num);
	
	if (num > 1) {
		if (num == 2) {
			printf("%d is prime number.", num);
		} else {
			for (i = 2; i < num; i++) {
				if (num % i == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				printf("%d is prime number", num);
			} else {
				printf("%d is not prime number", num);
			}
		}
	} else {
		printf("Added number is should more than 1.");
	}
	
	return 0;
}
