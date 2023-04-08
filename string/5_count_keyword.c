#include <stdio.h>
int main() {

  	char keyword[150];
  	int i, charactor = 0, digit = 0, space = 0, spacialChar = 0;

  	printf("Enter any keyword: ");
  	gets(keyword);

  	for (i = 0; keyword[i] != '\0'; i++) {
    	if (((keyword[i] >= 'a') && (keyword[i] <= 'z')) || ((keyword[i] >= 'A') && (keyword[i] <= 'Z'))) {
      		charactor++;
    	} else if (keyword[i] >= '0' && keyword[i] <= '9') {
      		digit++;
    	} else if (keyword[i] == ' ') {
      		space++;
      	} else {
      		spacialChar++;
		}
  	}

  	printf("\nCharactor: %d", charactor);
  	printf("\nDigits: %d", digit);
  	printf("\nWhite Spaces: %d", space);
  	printf("\nSpecial Charactor: %d", spacialChar);

  	return 0;
}

