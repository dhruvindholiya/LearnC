#include<stdio.h>

int main() {

	float unit, bill, totle_bill;

	printf("Please enter totle unit of electricity bill: ");
	scanf("%f", &unit);
	
	if (unit >= 0) {
		if (unit >= 0 && unit <= 50) {
			bill = unit * 0.5;
		} else if (unit > 50 && unit <= 150) {
			bill = 50 * 0.5 + (unit - 50) * 0.75;
	 	} else if (unit > 150 && unit <=250) {
	 		bill = 50 * 0.5 + 100 * 0.75 + (unit - 150) * 1.2;
		} else if (unit > 250) {
			bill = 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (unit - 250) * 1.5;
		}
		totle_bill = unit + (unit * 0.2);
	
		printf("Your bill: Rs. %f\n", bill);
		printf("Your total electricity Bill: Rs. %f", totle_bill);
		
	} else {
		printf("INVALIDE - Added unit should be more than or equal to 0.");
	}
	
	return 0;	
};
