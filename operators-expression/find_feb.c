#include<stdio.h>
int main() {
	
	int month;
	
	printf("Enter date hear: ");
	scanf("%d", &month);
	
	month < 30 ? printf("Given month is February") : printf("Given month is not February");
	
	return 0;
}
