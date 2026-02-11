#include <stdio.h>

int main(){

	int ano;
	int ano_bissexto;

	printf("Choose a year to verify if it's a leap year: ");
	scanf("%d", &ano);

	ano_bissexto = ano % 4;

	if(ano_bissexto == 0){
		printf("%d is a leap year.\n", ano);
	}else{
		printf("%d is not a leap year.\n", ano);
	}
	
	return 0;
}
