#include<stdio.h>

int main () {
	
	float n1, n2, n3;
	
	printf("Please enter any three numbers: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	if (n1 > n2) {
		if (n1 > n3) {
			printf("%f is maximum", n1);
		} else {
			printf("%f is maximum", n3);
		}
	} else {
		if (n2 > n3) {
			printf("%f is maximum", n2);
		} else {
			printf("%f is maximum", n3);
		}
	}
	
	return 0;
}
