#include<stdio.h>

int main() {
	
	char x;
	
	printf("Please enter any input: ");
	scanf("%c", &x);
	
	if ((x >= 'a' && x <='z' ) || (x >='A' && x <='Z') ){
		printf("%c is alphabate.", x);
	} else if (x >= '0' && x <= '9') {
		printf("%c is numbers.", x);
	} else {
		printf("Special symbol");
	}
	
	return 0;
}
