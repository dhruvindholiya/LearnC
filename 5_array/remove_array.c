#include <stdio.h>
int main() {
	int i, n, arr[100], ind;
	  
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Array ele no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	  
	printf("Which element do you want to remove?: ");
	scanf("%d", &ind);
	
	n--;
	
	for (i = ind - 1; i <= n; i++) {
		arr[i] = arr[i + 1]; 
	}
	
	printf("\nnew array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
  	return 0;
}

