#include<stdio.h>

int main () {
	
	float n1, n2, n3, n4;
	
	printf("Please enter any four numbers: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	if (n1 < n2) {
		if (n1 < n3) {
			if(n1 < n4) {
				printf("%f is minimum ", n1);
			} else {
				printf("%f is minimum ", n4);
			}
		} else {
			if(n3 < n4) {
				printf("%f is maximum", n3);
			} else {
				printf("%f is maximum", n4);
			}
		}
	} else {
		if (n2 < n3) {
			if (n2 < n4) {
				printf("%f is minimum ", n2);	
			} else {
				printf("%f is minimum ", n4);
			}
		} else {
			if(n3 < n4) {
				printf("%f is minimum ", n3);
			} else {
				printf("%f is minimum ", n4);
			}
		}
	}
	
	return 0;
}
