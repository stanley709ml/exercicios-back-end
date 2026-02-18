#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));

	int max, min, num, key, times_key_found;
	int x[30];

	times_key_found = 0;
	max = 15;
	min = 1;

	for(int i = 0; i < 30; i++){
		num = (rand() % (max - min + 1) + min);
	       	x[i] = num;	
	}

	printf("Say your key (number from 1-15): ");
	scanf("%d", &key);

	for(int j = 0; j < 30; j++){
		if(x[j] == key){
			printf("Key found in position %d: [%d]\n", j, x[j]);
			times_key_found++;
		}
	}

	printf("The key was generated %d times\n", times_key_found);

	return 0;
}
