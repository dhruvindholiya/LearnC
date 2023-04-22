#include <stdio.h>
int main() {
	int i, n, arr[i], ind, newEle;
	  
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Array ele no.%d: ", i);
		scanf("%d", &arr[i]);
	}
	  
	printf("Where do you want to add element?: ");
	scanf("%d", &ind);
	  
	printf("Please add new element.: ");
	scanf("%d", &newEle);
	
	n++;
	
	for (i = n - 1; i >= ind; i--) {
		arr[i] = arr[i - 1]; 
	}

	arr[ind - 1] = newEle;
	
	printf("\nnew array is: ");
	
	for(i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
  return 0;
}

