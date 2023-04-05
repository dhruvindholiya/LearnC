#include<stdio.h>

int armstrongNum(int num){
	
	int i, rem=0, res=0, originalNum;
	
	originalNum = num;
	
	for (i = 0; i < num; i++) {
		rem = num % 10;
		res = res + (rem * rem * rem);
		num = num / 10;
	}
	
	if (originalNum == res) {
		printf("Added number is armstrong number.");
	} else {
		printf("Added number is not armstrong number.");
	}

	
	return res;
}

int main () {
	int num;
	
	printf("Please enter any number: ");
	scanf("%d", &num);
	
	armstrongNum(num);
	
	
	return 0;
}
