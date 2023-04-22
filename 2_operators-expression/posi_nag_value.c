#include<stdio.h>

int main() {
	
	int a;
	
	printf("Enter any value: ");
	scanf("%d", &a);
	
	a>=0 ? printf("%d is positive value", a) : printf("%d is nagative value", a);
	
	return 0;
}
