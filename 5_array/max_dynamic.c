#include <stdio.h>
void smallestNum() {
  	int i, n, arr[100], max=0;
  
  	printf("Please enter size of an array: ");
	scanf("%d", &n);

  	for (i = 0; i < n; i++) {
    	printf("Array element no.%d: ", i);
		scanf("%d", &arr[i]);
  	}
  
  	for (i = 0; i < n; i++) {
  		if (arr[i] > max) {
  			max = arr[i];
  		}
	  
  	}
  	printf("\nmax: %d", max);
}

int main() {
	smallestNum();
	
	return 0;
}
