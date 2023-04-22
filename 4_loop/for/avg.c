#include<stdio.h>
int main() {
	
	int i, num;
	float avg;
	
	printf("Please enter any number: ");
	scanf("%d", &num);
	
	for (i=1; i<=num; i++) {
		avg = avg + i;
	}
	avg = avg / num;
	printf("\nThe sum of %d is: %f", num, avg);
	
	return 0;
}
