#include<stdio.h>
int main() {

	float far, cel;
	
	printf("Add temperature - Celsius: " );
	scanf("%f", &cel);
	
	far = ((cel) * 1.8) + 32;
	
	if (far > 105) {
		printf("%f farhanhit is hot temprature.", far);
	} else {
		printf("%f farhanhit is cold temprature.", far);
	}
		
	return 0;	
}
