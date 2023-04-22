#include<stdio.h>
int main() {
	
	int n, rem, rev=0, org_num; 
	
	printf("Please enter any number for for make revers digit and find that number is palindrome or not.: ");
	scanf("%d", &org_num);
	
	n = org_num;
	while (n > 0) {
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	
	printf("Revers number: %d\n\n", rev);
	
	if (org_num == rev) {
		printf("YES - Your added number is palindrome number.");
	} else {
		printf("NO - Your added number isn't palindrome number.");
	}
	
	

	return 0;
}
