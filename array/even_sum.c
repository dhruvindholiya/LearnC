#include <stdio.h>

int main() {
	int i, n, arr[i], sum=0;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Please enter element no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			sum = sum + arr[i];
		}
		
	}
	
	printf("\nThe sum of all even array is: %d", sum);
	
	return 0;
}
