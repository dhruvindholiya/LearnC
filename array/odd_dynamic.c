#include<stdio.h> 

int main () {
	int i, n;
	int arr[100];
	
	printf("Please enter the size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Array value no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\nArray values are: ");
	for (i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			printf("\n%d", arr[i]);
		}
	}
}
