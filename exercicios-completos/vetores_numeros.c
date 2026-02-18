#include <stdio.h>

int main(){
	
	int x[15];

	for(int i = 0; i < 15; i++){
		printf("Choose the %d number: ", i + 1);
		scanf("%d", &x[i]);
	}

	for(int j = 0; j < 15; j++){
		printf("[%d] ", x[j]);
	}

	printf("\nThe numbers that are multiple of ten are found in these positions:\n");
	
	for(int k = 0; k < 15; k++){
		if(x[k] % 10 == 0){
			printf("Position %d: [%d]\n", k, x[k]);
		}
	}

	return 0;
}
