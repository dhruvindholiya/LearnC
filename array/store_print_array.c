#include<stdio.h>

int main() {
	
	int i, n;
	int arr[100];
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Array value no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\nArray values are: ");
	for (i = 0; i < n; i++) {
		printf("\n%d", arr[i]);
	}
	
	return 0;
}
