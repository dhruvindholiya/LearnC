#include<stdio.h>

int main() {
	int arr[3][3] = {
		{1, 21, 98},
		{2, 12, 85},
		{3, 42, 56}
	};
	
	int i, x;
	for (i = 0; i < 3; i++) {
		for(x = 0; x < 3; x++) {
			printf("%d ", arr[i][x]);
		}
		printf("\n");
	}
	return 0;
}
