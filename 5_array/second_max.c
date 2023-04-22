#include <stdio.h>
#define MAX_SIZE 1000 

int main() {
	int i, n, arr[MAX_SIZE], max2=0;
	  
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
	    printf("Array element no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	  
	for (i = 0; i < n; i++) {
	  	if (arr[i] > max2) {
	  		max2 = arr[i];
		}
	}
	printf("\nsecond max: %d\n", max2);
	
	return 0;
}

