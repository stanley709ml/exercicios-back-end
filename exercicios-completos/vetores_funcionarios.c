#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char genders0[5];
	char genders[5];
	char names[5][50] = {0};
	float salaries[5];

	for(int i = 0; i < 5; i++){
		printf("Say the name of the %d worker: ", i + 1);
		fgets(names[i], sizeof(names[i]), stdin);
		names[i][strcspn(names[i], "\n")] = '\0';

		printf("Say the gender of the %d worker (M, F): ", i + 1);
		scanf("%c", &genders0[i]);

		genders[i] = genders0[i];

		printf("Say the salary of the %d worker: ", i + 1);
	       	scanf("%f", &salaries[i]);	
		
		getchar();	
       
	}

	printf("\nThese are the information of all the females workers that has a salary over $5.000:\n");

	for(int j = 0; j < 5; j++){
		if(genders[j] == 'F' && salaries[j] > 5000){
			printf("Name: %s\nSalary: $%.2f\n", names[j], salaries[j]);
		}	
	}

	return 0;
}
