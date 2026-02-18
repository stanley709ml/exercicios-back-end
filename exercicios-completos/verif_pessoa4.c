#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char name[50] = "N/A";
    char oldest_person[50] = "N/A";
    char youngest_woman[50] = "N/A";
    char gender0 = '\0';
    char gender = '\0';
    char continue_stop0 = '\0';
    char continue_stop = '\0';
    int age, oldest_age, youngest_age, total_people, menOver30, womenUnder18;
    float medium, sum_age;
    
    youngest_age = 999; 
    oldest_age = 0;
    age = 0;
    total_people = 0;
    menOver30 = 0;
    womenUnder18 = 0;
    medium = 0;
    sum_age = 0;

	while(1){
	
		printf("What's the person's name? ");
		fgets(name, sizeof(name), stdin);
		name[strcspn(name, "\n")] = '\0';

		printf("What's the age of this person? ");
		scanf("%d", &age);

		printf("What's the gender of this person (M/F)? ");
		scanf(" %c", &gender0);

		total_people++;
		sum_age += age;
		gender = toupper(gender0);

		if(age > oldest_age){
			oldest_age = age;
			strcpy(oldest_person, name);
		}

		if(gender == 'F' && age < youngest_age){
			youngest_age = age;
			strcpy(youngest_woman, name);
		}

		if(gender == 'M' && age > 30){
			menOver30++;
		}

		if(gender == 'F' && age < 18){
			womenUnder18++;
		}

		printf("Do you want to continue this program (Y/N)? ");
		scanf(" %c", &continue_stop0);

		getchar();

		continue_stop = toupper(continue_stop0);

		if(continue_stop == 'N'){
			break;
		}		
	}

	medium = sum_age / total_people;

	printf("\nThe name of the oldest person is %s\n", oldest_person);
	printf("The name of the youngest woman is %s\n", youngest_woman);
	printf("The medium of all these ages is %.1f\n", medium);
	printf("The ammount of men over 30 years old is %d\n", menOver30);
	printf("The ammount of women under 18 years old is %d\n", womenUnder18);

    return 0;
}
