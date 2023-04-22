#include<stdio.h>

int main (){
	
	int i, rem=0, res=0, temp;
	
	
	for (i = 1; i <= 1000; i++) {
		temp = i;
		while (temp > 0) {
			rem = temp % 10;
			res = res + (rem * rem * rem);
			temp = temp / 10;
		}
		
		if (res == i) {
			printf("%d\n", i);
		} 
		res = 0;
	}
	
	return 0;
}

