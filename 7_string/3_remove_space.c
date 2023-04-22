#include<stdio.h> 

int main() {
	
	int i, j;
	char str[100];
	
	printf("Please enter your full name: ");
	gets(str);
	
	while (str[i] != '\0') {
		if (str[i] == ' ') {
			for (j = i; str[j] != '\0'; j++) {
				str[j] = str[j + 1];
			}
		}
	i++;
	}
	
	puts(str);
	
	return 0;
}
