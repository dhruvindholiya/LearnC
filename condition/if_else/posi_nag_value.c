#include<stdio.h>

int main() {
	
	int a;
	
	printf("Enter any value: ");
	scanf("%d", &a);
	
	if (a>=0) {
		printf("%d is positive value", a);
	} else {
		printf("%d is nagative value", a);
	}
	
	return 0;
}
