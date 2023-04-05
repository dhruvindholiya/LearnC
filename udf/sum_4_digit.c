#include<stdio.h>

void average(int arr[]) {
	int i;
	float sum = 0, avg = 0;
	
	for(i = 0; i < 4; i++) {
		sum = (sum + arr[i]);
	}
	avg = sum/4;
	printf("ANS: %f", avg);
	
}

int main() {
	
	int arr[4], n, i;
	
	for (i = 0; i < 4; i++) {
		printf("No.%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	average(arr);
	
	return 0;
}
