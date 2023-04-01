#include <stdio.h>
#define MAX_SIZE 1000 

int main() {
	int i, n, arr[MAX_SIZE], temp=0, max2=0;
	  
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
	    printf("Array element no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	  
	for (i = 0; i < n; i++) {
	  	if (arr[i] > temp) {
	  		max2 = temp;
	  		temp = arr[i];
		} else if (arr[i] > max2 && arr[i] < temp) {
			arr[i] = max2;
		}
	}
	printf("\nsecond max: %d\n", max2);
	
	return 0;
}

