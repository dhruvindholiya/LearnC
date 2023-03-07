#include<stdio.h>
int main() {
	
	float mt, cm;
	
	printf("Add value of meter hear: ");
	scanf("%f", &mt); 
	
	cm = mt * 100;
	
	printf("%f is your value in centimeter.", cm);
	
	return 0;
}
