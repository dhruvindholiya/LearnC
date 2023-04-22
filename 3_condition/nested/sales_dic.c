#include<stdio.h>

int main () {
	
	char things;
	int purchase_amt, discount;
	
	printf("Please enter the type of things you purchased like: \n- M for mill cloths.\n- H for Handloom items.\n\nPlease enter here M or H: ");
	scanf("%c", &things);
	
	printf("amount of purchaed things: Rs. ");
	scanf("%d", &purchase_amt);
	
	if ((things == 'M' || things == 'm') && purchase_amt > 0 ) {
		if (purchase_amt > 0 && purchase_amt <= 100) {
			printf("Sorry, You can not get any discount.");
		} else if (purchase_amt > 100 && purchase_amt <= 200) {
			discount = purchase_amt * 0.05;
		} else if (purchase_amt > 200 && purchase_amt <= 300) {
			discount = purchase_amt * 0.075;
		} else if (purchase_amt > 300) {
			discount = purchase_amt * 0.1;
		}
		printf("\nCoungrats, You get discount: Rs.%d", discount);
	} else if ((things == 'H' || things == 'h') && purchase_amt > 0 ) {
		if (purchase_amt > 0 && purchase_amt <= 100) {
			discount = purchase_amt * 0.05;
		} else if (purchase_amt > 100 && purchase_amt <= 200) {
			discount = purchase_amt * 0.075;
		} else if (purchase_amt > 200 && purchase_amt <= 300) {
			discount = purchase_amt * 0.1;
		} else if (purchase_amt > 300) {
			discount = purchase_amt * 0.15;
		}
		printf("\nCoungrats, You get discount: Rs.%d/-", discount);
	} else {
		printf("INVALID - Please check your added input");
	}
	
	return 0;
}
