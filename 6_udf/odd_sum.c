#include <stdio.h>

int oddSum() {
	int i, n, arr[i], sum=0;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Please enter element no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 1) {
			sum = sum + arr[i];
		}
		
	}
	
	
	return sum;
}
int main() {
	int sum;
	
	sum = oddSum();
	
	printf("\nThe sum of all Odd array is: %d", sum);
}
