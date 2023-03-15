#include<stdio.h>

int main() {

	int yr;
	
	printf("Please add year: ");
	scanf("%d", &yr);
	
	if (yr < 0) {
		printf("INVALID - entered year should be more then or equal to 0.");
	} else if (yr % 400 == 0) {
		printf("%d is leap year.", yr);
	} else if  (yr % 100 == 0) {
		printf("%d is not leap year.", yr);
	} else if (yr % 4 == 0) {
		printf("%d is leap year.", yr);
	}

	return 0;	
};
