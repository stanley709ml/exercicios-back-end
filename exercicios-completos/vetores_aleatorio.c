#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	srand(time(NULL));
	
	int max = 10000, min = 0;
	int x[7];

	for(int i = 0; i < 7; i++){
		int num = (rand() % (max - min + 1) + min);
		x[i] = num;

		printf("[%d] ", x[i]);
	}	

	return 0;
}
