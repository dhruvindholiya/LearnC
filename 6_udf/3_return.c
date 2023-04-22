// =========== no parameters, with return value. ===========
#include<stdio.h>

float areaOfrect() {
	float area, h, l;
	
	printf("\nPlease enter height and length of rectangle: ");
	scanf("%f %f", &h, &l);
	
	area = h * l;
	
	return area;
}

int main() {
	
	float res, res1;
	
	res = areaOfrect();
	printf("\nArea of rectangle is: %f\n", res);
	
	res1 = areaOfrect();
	printf("\nArea of rectangle is: %f", res1);
	
	return 0;
}
