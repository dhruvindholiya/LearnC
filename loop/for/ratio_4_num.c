#include<stdio.h>
int main() {
	
	int i, a, b, c, d;
	float ans;
	
	for (i=1; i<=3; i++) {
		printf("Please enter any four numbers: ");
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		if (c == d) {
			printf("Ratio is not possible");
		} else {
			ans = (a-b) / (c-d);
			printf("Ans: %f\n", ans);
		}
	}
	
	return 0;
}
