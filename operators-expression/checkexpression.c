#include<stdio.h>

int main() {
	int x, y;
	
	printf("Add your first value: ");
	scanf("%d", &x);
	
	printf("Add your secound value: ");	
	scanf("%d", &y);
		
	(x>100) || (x != y) || (y < 50) ? printf("expression is true") : printf("expression is false");
	
	! (x == y && y < 10) ? printf("expression is true") : printf("expression is false");
	
	return 0;
}
