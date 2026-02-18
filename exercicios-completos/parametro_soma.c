#include <stdio.h>

void sum(float num1, float num2);

int main(){

	int num0, num;
	
	printf("Choose the first number: ");
	scanf("%d", &num0);


	printf("Choose the second number: ");
	scanf("%d", &num);

	sum(num0, num);	

	return 0;
}

void sum(float num1, float num2){
	float sum_nums = num1 + num2;

	printf("%.0f\n", sum_nums);
}
