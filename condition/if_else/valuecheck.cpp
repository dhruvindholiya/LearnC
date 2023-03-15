#include<stdio.h>

int main() {
	
	int a;
	
	printf("Enter any value: ");
	scanf("%d", &a);
	
	if (a>=100) {
		printf("%d is gratore than and equale to 100", a );
	} else {
		printf("%d is less than to 100", a);
	}
	
	return 0;
}
