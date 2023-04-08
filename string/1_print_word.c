#include <stdio.h>

int main() {
	
	int i;
	char name[13] = {'S', 'u', 'r', 'a', 't', ' ', 'S', 'u', 'n', 'd', 'a', 'r'};
	
	puts(name);
	
	for (i = 0; i < name[i]; i++) {
		if ((name[i + 1] == ' ') || (name[i] == ' ') || (name[i + 1] == '\0')) {
			printf("%c", name[i]);
		} else {
			printf("%c - ", name[i]);
		}
	}
		
	return 0;
}
