#include <stdio.h>

int main(){

	int ages[8];
	float sum_ages, medium;
	int total_people, oldest_age, oldest_pos;

	sum_ages = 0;
	medium = 0;
	oldest_age = 0;
	total_people = 0;
	oldest_pos = 0;

	for(int i = 0; i < 8; i++){
		printf("Say the %d age: ", i + 1);
		scanf("%d", &ages[i]);
		
		total_people++;
		sum_ages += ages[i];	
	}

	medium = sum_ages / total_people;
	
	printf("The medium of all of the ages above is %.1f\n", medium);
	printf("The position of the people that are over 25 years old:\n");

	for(int j = 0; j < 8; j++){
		if(ages[j] > 25){
			printf("Position %d: [%d]\n", j + 1, ages[j]);
		}
	}

	for(int k = 0; k < 8; k++){
		if(ages[k] > oldest_age){
			oldest_age = ages[k];	
			oldest_pos = k;
		}	
	}

	printf("The position of the oldest age is %d: [%d]\n", oldest_pos + 1, oldest_age);	

	return 0;
}
