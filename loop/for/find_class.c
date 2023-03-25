#include<stdio.h>
int main () {
	
	int i, students, roll_n, phy, chem, bio, eng, sans, sub_mark, totle_mark;
	char grade;
	
	printf("How many students who are you want to find the class by their marks?: ");
	scanf("%d", &students);
	
	if (students > 0) {
		for (i = 1; i <= students; i++) {
			printf("\nPlease enter roll number of student: ");
			scanf("%d", &roll_n);
		
			if (roll_n <= 0) {
				printf("\nINVALID - Please check your added input.\n");
				break;
			} else {
				printf("\nPlease enter marks out of 100 of given subject to below:\n");
				
				printf("Physics: ");
				scanf("%d", &phy);
				
				printf("Chemistry: ");
				scanf("%d", &chem);
				
				printf("Biology: ");
				scanf("%d", &bio);
				
				printf("English: ");
				scanf("%d", &eng);
				
				printf("Sanskrit: ");
				scanf("%d", &sans);
				
				totle_mark = phy + chem + bio + eng + sans;
					
			  	if (totle_mark > 450) {
					grade = 'A';
				} else if (totle_mark > 350 && totle_mark <= 450) {
					grade = 'B';
				} else if (totle_mark <= 350) {
					grade = 'C';
				} else if (totle_mark > 500) {
					printf("INVALID - Please check your added input.");
				}
				
				printf("\nTotle marks: %d/500", totle_mark);
				printf("\nGrade: %c\n", grade);
			}
		}
	} else {
		printf("\nINVALID - Please check your added input.");
	}
	
	
	return 0;
}
