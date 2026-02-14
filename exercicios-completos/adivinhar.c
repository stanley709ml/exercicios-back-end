#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));

	int max, min, num, guess;

	max = 5;
	min = 1;

	num = (rand() % (max - min + 1) + min);

	printf("Guess the number that the computer chose: ");
	scanf("%d", &guess);

	if(num == guess){
		printf("Well done! You guessed the correct number (%d)!\n", num);
	}else{
		printf("You did not guess the correct number (%d).\n", num);
	}

	return 0;
}
