#include<stdio.h>

int main () {
	
	int month;
	
	printf("Enter month number: ");
	scanf("%d", &month);
	switch (month) {
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;	
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("Octomber");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("INVALID - Please check your added input.");
			break;
	}
		
		return 0;
}
