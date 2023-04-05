// with parameters, no return value.
#include<stdio.h>

void areaOfCircle(float r) {
	
	float area;
	
	area = 3.14 * r * r;
	
	printf("Area of this circle is: %f\n", area);
	
}

int main() {

	printf("'areaOfCircle' function call first time with int:\n");
	
	areaOfCircle(5);
	
	printf("\n'areaOfCircle' function call first time with float:\n");
	
	areaOfCircle(8.5);
	
	return 0;
}
