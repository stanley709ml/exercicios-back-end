#include <stdio.h>
#include <ctype.h>

int main(){
	
	char continue_stop0 = '\0';
	char continue_stop = '\0';
	int age, total_people, over21;
	float medium, sum_age;

	age = 0;
	total_people = 0;
	over21 = 0;
	medium = 0;
	sum_age = 0;

	do{
	
		printf("Insert the age of the person: ");
		scanf("%d", &age);

		total_people++;
		sum_age += age;

		if(age > 21){
			over21++;
		}

		printf("Do you want to continue the program (Y/N)? ");
		scanf(" %c", &continue_stop0);
		
		continue_stop = toupper(continue_stop0);

	}while(continue_stop == 'Y');

	medium = sum_age / total_people;
	
	printf("\nThe ammount of ages typed in is %d\n", total_people);
	printf("The medium of all those ages is %.1f\n", medium);
	printf("The ammount of people over 21 is %d\n", over21);

	return 0;
}
