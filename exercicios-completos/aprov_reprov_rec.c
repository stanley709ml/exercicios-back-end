#include <stdio.h>

int main(){

	float grade1, grade2, medium;
	
	printf("What was your first grade (0-10)? ");
	scanf("%f", &grade1);

	printf("What was your second grade (0-10)? ");
	scanf("%f", &grade2);

	medium = (grade1 + grade2) / 2;

	if(medium >= 7){
		printf("Your medium is a total of %.1f and you're approved.\n", medium);
	}else if(medium >= 5){
		printf("Your medium is a total of %.1f and you're set to recovery.\n", medium);
	}else{
		printf("Your medium is a total of %.1f and you're unapproved.\n", medium);
	}

	return 0;
}
