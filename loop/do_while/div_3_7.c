#include<stdio.h>

int main() {
	
	int i, n, num;
	
	printf("how many numbers do you want to check? : ");
	scanf("%d", &n);
	
	i = 1;
	do {
		printf("\nEnter number: ");
		scanf("%d", &num);
		
		if (num % 7 == 0 || num % 3 == 0) {
			printf("%d is divisible\n", num);
		} else {
			printf("%d is not divisible\n", num);
		}
		i++;
	} while (i <= n);
	
	return 0;
}
