#include <stdio.h>
#include <string.h>

int main(){
	
	char name[50];
	int gender;
	float shopping_total;
	float total_discount;
	float discount;

	printf("Hello. What is your name? ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';

	printf("And what's your gender?\n1. Male\n2. Female\n ");
	scanf("%d", &gender);

	printf("And what's the total of your shoppings? ");
	scanf("%f", &shopping_total);

	if(gender == 2){
	
		discount = 13;
		total_discount = shopping_total - (shopping_total * discount / 100);

		printf("Lady, you're in luck that today is the women day!\nYou will get an special discount of 13 percent.\nYour total is from $%f to $%f", shopping_total, total_discount);
	}else if(gender == 1){

		discount = 5;
		total_discount = shopping_total - (shopping_total * discount / 100);

		printf("Man, you will also get a discount, but it is of five percent.\nYour total is from $%.2f to $%.2f", shopping_total, total_discount);
	}else{
		printf("Invalid. Try again");
	}

	return 0;
}
