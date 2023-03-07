#include<stdio.h>

int main() {
	int x, y;
	
	printf("Add your first value: ");
	scanf("%d", &x);
	
	printf("Add your secound value: ");	
	scanf("%d", &y);
	
	if ((x>100) || (x != y) || (y < 50)) {
		printf("expression is true");
	} else {
		printf("expression is false");
	}
	
	if (! (x == y && y < 10)) {
		printf("expression is true");
	} else {
		printf("expression is false");
	}
	
	return 0;
}
