#include <stdio.h>

int checkPrimeNumber(int i) {
  int j, flag = 1;

  for (j = 2; j <= i / 2; j++) {

    if (i % j == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}

int main() {

  int i, flag, arr[2];

  printf("Enter two positive integers: ");
  scanf("%d %d", &arr[0], &arr[1]);

  printf("Prime numbers between %d and %d are: ", arr[0], arr[1]);
  for (i = arr[0] + 1; i < arr[1]; i++) {
  	
    flag = checkPrimeNumber(i);

    if (flag == 1) {
      printf("%d ", i);
    }
  }
  
  return 0;
}

