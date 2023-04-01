#include <stdio.h>

int main() {
	
    int marks[100], i, n, group, count[11] = {0};
    
    printf("How many students: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Please enter marks of student's no.%d: ", i + 1);
		scanf("%d", &marks[i]);
	}

    for (i=0; i<n; i++) {
        group = marks[i] / 10;
        count[group]++;
    }

    printf("\nGroup\tNumber of Students\n");
    
    for (i=0; i<10; i++) {
        printf("%d-%d\t%d\n", i * 10, i * 10 + 9, count[i]);
    }
    
    printf("100\t%d\n", count[10]);

    return 0;
}
