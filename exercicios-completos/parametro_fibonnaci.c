#include <stdio.h>

void fibonnaci(int num);

int main(){

	int num1;

	printf("How many numbers from the fibonnaci sequence you want to generate? ");
	scanf("%d", &num1);

	fibonnaci(num1);

	return 0;	
}

void fibonnaci(int num){
	int x = 0, y = 1, z;

	for(int i = 1; i <= num; i++){
		printf("%d ", x);

		z = x + y;
		x = y;
		y = z;
	}
}
