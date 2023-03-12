#include<stdio.h>

int main() {

	int yr;
	
	printf("Please add year: ");
	scanf("%d", &yr);
	
	if (yr % 400 == 0) {
		printf("%d is leap year.", yr);
	} else if (yr % 4 == 0) {
		printf("%d is leap year.", yr);
	} else if  (yr % 100 == 0) {
		printf("%d is not leap year.", yr);
	} else if  (yr < 0) {
		printf("%d is INVALID please check your added year.", yr);
	} else {
		printf("This is not leap year");
	}

	return 0;	
};
