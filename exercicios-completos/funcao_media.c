#include <stdio.h>

float medium(float grade1, float grade2);

int main(){

	float grade0, grade, grades_medium;

	printf("What's your first grade? ");
	scanf("%f", &grade0);

	printf("What's your second grade? ");
	scanf("%f", &grade);

	grades_medium = medium(grade0, grade);

	printf("The medium of your grades is %.1f\n", grades_medium);

	return 0;
}

float medium(float grade1, float grade2){
	float medium_grades = (grade1 + grade2) / 2;

	return medium_grades;
}
