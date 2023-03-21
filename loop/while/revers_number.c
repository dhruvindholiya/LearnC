#include<stdio.h>
int main() {
	
	int n, rem, rev; 
	
	printf("Please enter any number for count digit: ");
	scanf("%d", &n);
	
	while (n > 0) {
		rem = rev % 10;
		rev = rev * 10 + rem;
		n = n/10;
		rev++;
	}
	
	printf("The digit of your number is: %d", rev);
	
	

	return 0;
}
