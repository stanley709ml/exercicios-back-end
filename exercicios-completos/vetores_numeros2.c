#include <stdio.h>

int main(){
	
	int x[10];

	for(int i = 0; i < 10; i++){
		printf("Choose the %d number: ", i + 1);
		scanf("%d", &x[i]);
	}

	printf("\nThe numbers that are even are:\n");

	for(int j = 0; j < 10; j++){
		if(x[j] % 2 == 0){
			printf("Position %d: [%d]\n", j, x[j]);
		}	
	}

	return 0;
}
