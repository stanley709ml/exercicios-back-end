#include <stdio.h>

int main(){

	int birth_year;
	int total_age;
	const int current_year = 2026;
	
	printf("What year were you born? ");
	scanf("%d", &birth_year);

	total_age = current_year - birth_year;

	if(total_age >= 18){
		printf("You're over 18 and you can vote.\n");
	}else{
		printf("You're under 18 and you can't vote yet.\n");
	}

	return 0;
}
