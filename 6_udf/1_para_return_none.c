// no parameters, no return value.
#include<stdio.h>

void intro() {
	
	printf("NAME: Dhruvin Dholiya\n");
	printf("FROM: Surat(Gujrat)\n");
	printf("TEL : +91 81406 91801\n\n");
	
}

int main() {
	printf("-------------------------------\n");
	printf("Intro function call first time:\n");
	printf("-------------------------------\n");
	
	intro();
	
	printf("-----------------------------------");
	printf("\nIntro function call Secound time:\n");
	printf("-----------------------------------\n");
	
	intro();
	
	printf("---------------------------------");
	printf("\nIntro function call third time:\n");
	printf("---------------------------------\n");
	
	intro();
	
	return 0;
}
