#include <stdio.h>

int main() {
	int i, n, arr[100], first;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Please enter element no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	first = arr[0];
	
	for (i = 0; i < n; i++) {
		arr[i] = arr[i + 1];
	}
	
	arr[n - 1] = first;
	
	printf("\nNew array is: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
