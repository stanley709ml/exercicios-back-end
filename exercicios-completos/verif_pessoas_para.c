#include <stdio.h>
#include <ctype.h>

int main(){
	
	char gender0 = '\0';
	char gender = '\0';
	float weight, sum_weight_women, heaviest, medium_weight_women;
	int total_women, menOver100;

	medium_weight_women = 0;
	weight = 0;
	sum_weight_women = 0;
	heaviest = 0;
	total_women = 0;
	menOver100 = 0;

	for(int i = 1; i <= 8; i++){
		printf("What's the weight of the %d person? ", i);
		scanf("%f", &weight);

		printf("What's the gender of the %d person (M/F)? ", i);
		scanf(" %c", &gender0);

		gender = toupper(gender0);

		if(gender == 'F'){
			total_women++;
			sum_weight_women += weight;
		}

		if(gender == 'M' && weight > 100){
			menOver100++;
		}

		if(gender == 'M' && weight > heaviest){
			heaviest = weight;
		}
	}

	medium_weight_women = sum_weight_women / total_women;

	printf("\nThe ammount of women there is %d\n", total_women);
	printf("The ammount of men above 100kg is %d\n", menOver100);
	printf("The medium of the women's weight is %.1f\n", medium_weight_women);
	printf("The heaviest weight between the mens is %.1fkg\n", heaviest);	

	return 0;
}
