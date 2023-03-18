#include<stdio.h>
int main() {
	
	int i, num, factorial;
	
	printf("Please enter any number: ");
	scanf("%d", &num);

	for (i=1; i<=num; i++) {
		factorial = factorial*i;
	}
	printf("\nThe Factorial of %d is: %d", num, factorial);
	
	return 0;
}
