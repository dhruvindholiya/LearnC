#include <stdio.h>

int main() {
	int i, n, arr[i], sum=0, avg=0;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Please enter element no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n; i++) {
		sum = sum + arr[i];
		avg = sum / n;
	}
	
	
	printf("\nThe average of this array is: %d", avg);
	return 0;
}
