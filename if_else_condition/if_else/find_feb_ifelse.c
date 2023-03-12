#include<stdio.h>
int main() {
	
	int month;
	
	printf("Enter date hear: ");
	scanf("%d", &month);
	
	if (month < 30) {
		printf("Given month is February");
	} else {
		printf("Given month is not February");
	}
	
	return 0;
}
