#include<stdio.h>
int main() {
	
	int i, num, fact=1;
	
	printf("Please enter any number: ");
	scanf("%d", &num);

	for (i=num; i>=1; i--) {
		fact = fact*i;
	}
	printf("\nThe Factorial of %d is: %d", num, fact);
	
	return 0;
}
