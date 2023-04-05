// with parameters, with return value.

#include<stdio.h>

int add(int a, int b) {
	int val;
	
	val = a + b;
	
	return val;
}

int sub(int a, int b) {
	int val;
	
	val = a - b;
	
	return val;
}

int mul(int a, int b) {
	int val;
	
	val = a * b;
	
	return val;
}

int div(int a, int b) {
	int val;
	
	val = a / b;
	
	return val;
}

int main() {
	
	int res, a, b;
	char op;
	
	printf("Please enter two values: ");
	scanf("%d %d", &a, &b);
		
	printf("Please enter opprator: ");
	scanf(" %c", &op);
	
	switch(op) {
		case '+':
			res = add(a, b);
			break;
		case '-':
			res = sub(a, b);
			break;
		case '*':
			res = mul(a, b);
			break;
		case '/':
			res = div(a, b);
			break;
		default:
			printf("\n\nINVALID - Please check your added input.\n\n");
			break;
	}
	
	printf("Result: %d", res);
	
	
	return 0;
}
