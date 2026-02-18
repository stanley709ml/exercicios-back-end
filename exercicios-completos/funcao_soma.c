#include <stdio.h>

float sum(float num1, float num2);

int main(){

	float num0, num, result;

	printf("Choose the first number: ");
	scanf("%f", &num0);

	printf("Choose the second number: ");
	scanf("%f", &num);

	result = sum(num0, num);

	printf("The sum of %.2f and %.2f is %.2f\n", num0, num, result);

	return 0;
}

float sum(float num1, float num2){
	
	return num1 + num2;
}
