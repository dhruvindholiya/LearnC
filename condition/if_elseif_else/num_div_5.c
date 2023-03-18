#include<stdio.h>

int main() {
	 
	int num;
	float ans;
	
	printf("Please Enter any number: ");
	scanf("%d", &num);
	
	if (num % 5 == 0) {
		printf("%d number is divisible by 5.", num);
	} else {
		printf("%d number is not divisible by 5.", num);
	}
	
	return 0;
}
