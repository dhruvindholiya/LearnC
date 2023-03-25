#include<stdio.h>

int main () {
	
	int count=1, x, y, power=1;
	
	printf("Please enter any two numbers for calculate X power by Y: ");
	scanf("%d %d", &x, &y);
	
	while (count <= y) {
		power = power * x;
		count++;
	}
	
	printf("Your ans is: %d", power);
	
	return 0;
}
