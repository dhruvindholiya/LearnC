#include <stdio.h>
void evenOdd() {
    int i, n, num, res;
 
	printf("How many numbers do you want to check that are odd or even? : ");
    scanf("%d", &n);
    
	for(i = 1; i <= n; i++) {
		    
	    printf("\nAdd number for check: ");
	    scanf("%d", &num);
	    
    	res = num % 2;
	    
		if (res == 0) {
    		printf("ANS: %d is Even\n", num);
		} else {
			printf("ANS: %d is Odd\n", num);
		}
	}
}

int main() {
	
	evenOdd();
	
	return 0;
}

