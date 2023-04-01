#include <stdio.h>

int main() {
	int i, n, arr[100], last;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Please enter element no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	last = arr[n - 1];
	
	for (i = n - 1; i >= 0; i--) {
		arr[i] = arr[i - 1];
	}
	
	arr[0] = last;
	
	printf("\nNew array is: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
