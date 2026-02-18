#include <stdio.h>

int main(){
	
	int grades[10];
	float sum_grades, medium;
	int total_students, students_above_medium, highest_grade, highest_grade_pos;

	sum_grades = 0;
	medium = 0;
	students_above_medium = 0;
	highest_grade = 0;
	total_students = 0;

	for(int i = 0; i < 10; i++){
		printf("Say the grade of the %d student: ", i + 1);
		scanf("%d", &grades[i]);
		sum_grades += grades[i];
		total_students++;
	}

	medium = sum_grades / total_students; 

	for(int j = 0; j < 10; j++){
		if(grades[j] > medium){
			students_above_medium++;
		}
		
		if(grades[j] > highest_grade){
			highest_grade = grades[j];
			highest_grade_pos = j;
		}	
	}

	printf("The medium of the class is %.1f\n", medium);
	printf("The ammount of students above the class medium is %d\n", students_above_medium);
	printf("The highest grade in the class is %d\n", highest_grade);
	printf("The position of the highest grade is %d\n", highest_grade_pos + 1);
		
	return 0;
}
