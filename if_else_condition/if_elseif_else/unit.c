#include<stdio.h>

int main() {

	float unit, amt, surcharge, total_amt;
	
	printf("Please enter totle unit of electricity bill: ");
	scanf("%f", &unit);
	
	if (unit <= 50) {
		amt = unit * 0.5;
	} else if (unit <= 150) {
		amt = unit * 0.75;
 	} else if (unit <=250) {
 		amt = unit * 1.2;
	} else {
		amt = unit *  1.5;
	}
	
	surcharge = amt * 0.2;
	total_amt = amt + surcharge;
	
	printf("Your electricity Bill = Rs. %f", total_amt);
	

	return 0;	
};
