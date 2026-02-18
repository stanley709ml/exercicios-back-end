#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));

	int num, max = 99, min = 1, temp = 0;
	int x[20];

	for(int i = 0; i < 20; i++){
		num = (rand() % (max - min + 1) + min);
	       	x[i] = num;	
	} 

	for(int j = 0; j < 20; j++){
		for(int k = 0; k < 20; k++){
			if(x[k] > x[k+1]){
				temp = x[k];
				x[k] = x[k+1];
				x[k+1] = temp;
			}
		}
	}

	for(int l = 0; l < 20; l++){
		printf("[%d]\n", x[l]);
	}

	return 0;
}
