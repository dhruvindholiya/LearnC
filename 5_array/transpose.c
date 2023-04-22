#include<stdio.h>

int main() {
	int arr[3][3] = {
		{10, 20, 30},
		{30, 50, 60},
		{70, 80, 90}
		
	};
	
	int i, x, trans[3][3] = {0};
	
	for (i = 0; i < 3; i++) {
		for(x = 0; x < 3; x++) {
			trans[x][i] = arr[i][x];
		}
	}
	
	for (i = 0; i < 3; i++) {
		for(x = 0; x < 3; x++) {
			printf("%d ", trans[i][x]);
		}
		printf("\n");
	}
	return 0;
}
