#include<stdio.h> 

int main() {
	
	int i, count=0, students;
	float height, weight;
	
	printf("Please enter count of students in your school: ");
	scanf("%d", &students);
	
	for (i=1; i<=students; i++) {
		printf("Please enter weight and height: ");
		scanf("%f %f", &weight, &height);
		if (weight <= 50 && height >= 170) {
			count++;
		}
	}
	
	printf("Count of boys is: %d", count);

	return 0;	
}

