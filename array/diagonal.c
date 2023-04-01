#include<stdio.h>

int main() {
	int arr[3][3] = {
		{10, 20, 30},
		{30, 50, 60},
		{70, 80, 90}
		
	};
	
	int i, x, sum = 0;
	
	for (i = 0; i < 3; i++) {
		for(x = 0; x < 3; x++) {
			if(i == x) {
				sum = sum + arr[i][x];
			}
		}
	}
	
	printf("%d", sum);
	return 0;
}
