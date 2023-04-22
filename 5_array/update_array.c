#include <stdio.h>
int main() {
  	int i, n, arr[i], ind, newEle;
  
  	printf("Please enter size of an array: ");
	scanf("%d", &n);

  	for (i = 0; i < n; i++) {
    	printf("Array element no.%d: ", i);
		scanf("%d", &arr[i]);
  	}
  	
  	printf("\nWhich element do you want to change?: ");
  	scanf("%d", &ind);
  
  	printf("Please add new number.: ");
  	scanf("%d", &newEle);

	arr[ind - 1] = newEle;
	
	printf("\nnew array is: ");
	
	for(i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
  	return 0;
}

