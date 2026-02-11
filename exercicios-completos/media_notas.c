#include <stdio.h>
#include <string.h>

int main(){
	
	char name[50] = "";
	float first_grade;
	float second_grade;
	float medium;

	printf("What is your name? ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';

	printf("What was your first grade (0-10)? ");
	scanf("%f", &first_grade);

	printf("What was your second grade (0-10)? ");
	scanf("%f", &second_grade);

	medium = (first_grade + second_grade) / 2;

	if(medium > 7){
		printf("\nYour medium is a total of %.2f.\n", medium);
		printf("%s, you had a good use of your grades.\n", name);
	}else{
		printf("\nYour medium is a total of %.2f.\n", medium);
		printf("%s, you had a bad use of your grades.\n", name);
	}	

	return 0;
}
