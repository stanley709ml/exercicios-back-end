#include <stdio.h>

void even_or_odd(int num);

int main(){

	int num0;

	printf("Say the number you want to check if it's even or odd: ");
	scanf("%d", &num0);

	even_or_odd(num0);

	return 0;
}

void even_or_odd(int num){
	if(num % 2 == 0){
		printf("This number is even\n");
	}else{
		printf("This number is odd\n");
	}
}
