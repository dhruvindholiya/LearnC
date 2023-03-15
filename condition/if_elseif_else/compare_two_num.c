#include<stdio.h> 

int main() {
	
	int n1, n2;
	
	printf("Please enter two number: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 < n2) {
		printf("%d is less than to %d.", n1, n2);	
	} else if (n1 > n2) {
		printf("%d is more than to %d.", n1, n2);
	} else {
		printf("%d is equal to %d", n1, n2);
	}
	
	return 0;
}
