#include <stdio.h>

float medium(float grade1, float grade2);
float situacao(float medium_grades);

int main(){

	float grade0, grade, grades_medium;
	float ssituation;

	printf("What's your first grade? ");
	scanf("%f", &grade0);

	printf("What's your second grade? ");
	scanf("%f", &grade);

	grades_medium = medium(grade0, grade);
	ssituation = situacao(grades_medium);

	printf("The medium of your grades is %.1f\n", grades_medium);

	if(ssituation == 3){
		printf("The student is failed\n");
	}else if(ssituation == 2){
		printf("The student is due to recovery\n");
	}else{
		printf("The studdent is passed\n");
	}

	return 0;
}

float medium(float grade1, float grade2){
	float medium_grades = (grade1 + grade2) / 2;

	return medium_grades;
}

float situacao(float medium_gradess){

	float situation = 0;

	if(medium_gradess >= 6){
		situation = 1;
	}else if(medium_gradess >= 5){
		situation = 2;
	}else{
		situation = 3;
	}

	return situation;
}
