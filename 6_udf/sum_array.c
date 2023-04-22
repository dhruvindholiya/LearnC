#include <stdio.h> 

int sumArr(int arr[], int n) {
	
	int sum = 0, i;
	
	for (i=0; i<=n; i++) {
		sum = sum + arr[i];
	}
	
	return sum;
}

int main() {
	
	int n, i, arr[100], res;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i < n; i++) {
		printf("Arry no. %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	res = sumArr(arr, n);
	printf("Sum of your added array is: %d", res);
	
	return 0;
}
