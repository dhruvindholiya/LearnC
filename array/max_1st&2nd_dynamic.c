#include <stdio.h>
int main() {
  int i, n, arr[i], m1=0, m2=0;
  
  printf("Please enter size of an array: ");
	scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Array element no.%d: ", i);
	scanf("%d", &arr[i]);
  }
  
  for (i = 0; i < n; i++) {
  	if (arr[i] > m1) {
  		m2 = m1;
  		m1 = arr[i];
	} else if (arr[i] > m2 && arr[i] < m1) {
		arr[i] = m2;
	}
	  
  }
  printf("\n1st max: %d", m1);
  printf("\n2nd max: %d\n", m2);

  return 0;
}

