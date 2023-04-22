#include<stdio.h>
int main() {
	
	int i, num, sum=0;
	
	printf("Please enter any number: ");
	scanf("%d", &num);
	
	for (i=1; i<=num; i++) {
		sum = sum + i;
	}
	printf("\nThe sum of %d is: %d", num, sum);
	
	return 0;
}
