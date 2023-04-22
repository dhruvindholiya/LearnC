#include<stdio.h>
int main() {
	
	int n, rem, rev=0; 
	
	printf("Please enter any number for for make revers digit: ");
	scanf("%d", &n);
	
	while (n > 0) {
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	
	printf("The digit of your number is: %d", rev);
	
	

	return 0;
}
