#include<stdio.h> 

int main() {
	int i, roll[5] = {-90, -89, 39, -8, 11};

	for (i = 0; i <= 4; i++) {
		if (roll[i] < 0) {
			printf("%d\n", roll[i]);
		}
	}
	return 0;	
}

