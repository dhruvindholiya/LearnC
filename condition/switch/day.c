#include<stdio.h>

int main () {
	
	char day;
	
	printf("Enter the first letter of day: ");
	scanf("%c", &day);
	
	switch (day) {
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuseday");
			break;
		case 'W':
			printf("Wendsday");
			break;
		case 't':
			printf("Thursday");
			break;	
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saterday");
			break;
		case 's':
			printf("Sunday");
			break;
		default:
			printf("\nINVALID - Please check your added input.");
			break;
	}
		
		return 0;
}
