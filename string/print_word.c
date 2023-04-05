#include <stdio.h>

int main() {
	
	int i;
	char str[5] = {'S', 'u', 'r', 'a', 't'};
	
	puts(str);
	
	while (str[i] != '\0') {
		
		printf("%c - ", str[i]);
		
		i++;
	}
	
	return 0;
}
