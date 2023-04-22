#include <stdio.h> 

int findFectNum(int num) {
	
	if (num > 1) {
		return num * findFectNum(num - 1);
	} else {
		return 1;
	}

}

int main() {
	
	int num, i, res;
	
	printf("Please enter any number for find fectorial: ");
	scanf("%d", &num);
	
	res = findFectNum(num);
	printf("Fectorial number: %d", res);
		
	return 0;
}
