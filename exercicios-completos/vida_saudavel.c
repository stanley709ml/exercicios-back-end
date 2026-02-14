#include <stdio.h>

int main(){
	
	float exercise_hours, points, total;

	printf("For how many hours did you exercise? ");
	scanf("%f", &exercise_hours);

	if(exercise_hours > 20){
		points = exercise_hours * 10;
		total = points * 0.05;
		printf("You gained %.0f points and you earned $%.2f\n", points, total);
	}else if(exercise_hours > 10 && exercise_hours < 20){
		points = exercise_hours * 5;
		total = points * 0.05;
		printf("You gained %.0f points and you earned $%.2f\n", points, total);
	}else{
		points = exercise_hours * 2;
		total = points * 0.05;
		printf("You gained %.0f points and you earned $%.2f\n", points, total);
	}

	return 0;
}
