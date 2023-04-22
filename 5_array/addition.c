#include<stdio.h>

int main() {
	int arr1[3][3] = {
		{10, 20, 30},
		{30, 50, 60},
		{70, 80, 90}
		
	};
	int arr2[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int i, x;
	int res[3][3] = {0};
	
	for (i = 0; i < 3; i++) {
		for(x = 0; x < 3; x++) {
			res[i][x] = arr1[i][x] + arr2[i][x];
		}
	}
	
	for (i = 0; i < 3; i++) {
		for(x = 0; x < 3; x++) {
			printf("%d ", res[i][x]);
		}
		printf("\n");
	}
	return 0;
}
