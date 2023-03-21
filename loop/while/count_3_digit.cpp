#include<stdio.h>
int main() {
	
	int n, counter=0;
	
	printf("Please enter any number for count digit: ");
	scanf("%d", &n);
	
	while (n > 0) {
		n = n/10;
		counter++;
	}
	
	printf("The digit of your number is: %d", counter);

	return 0;
}
