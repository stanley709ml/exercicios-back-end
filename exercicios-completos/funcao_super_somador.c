#include <stdio.h>

float SuperSomador(float num1, float num2);

int main(){
	
	float num0, num, superSum;

	printf("Choose the first number: ");
	scanf("%f", &num0);

	printf("Choose the second number: ");
	scanf("%f", &num);

	superSum = SuperSomador(num0, num);

	printf("The super sum of the two numbers above is %.2f\n", superSum);

	return 0;
}

float SuperSomador(float num1, float num2){
	float sum_num;

	for(int i = num1; i <= num2; i++){
		sum_num += i;
	}

	return sum_num;
}
