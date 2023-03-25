#include<stdio.h>

int main() {
	
	int i, num[10] = { 23, 4, 67, 56, 78, 45, 3, 30, 89, 50};
	
	for (i = 0; i <= 10; i++) {
		if (num[i] % 2 == 0) {
			printf("%d\n", num[i]);
		}
	}
	return 0;
}
