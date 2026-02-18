#include <stdio.h>

float  maior(float num1, float num2, float num3);

int main(){

	float num0, num, numm, maior_num;

	printf("Choose an number: ");
	scanf("%f", &num0);

	printf("Choose the other number: ");
	scanf("%f", &num);

	printf("Choose one more number: ");
	scanf("%f", &numm);

	maior_num = maior(num0, num, numm);	

	printf("The greatest number is %.2f\n", maior_num);

	return 0;
}

float maior(float num1, float num2, float num3){
	float greatest;

	if(num1 > num2 && num1 > num3){
		greatest = num1;	
	}else if(num2 > num1 && num2 > num3){
		greatest = num2;
	}else if(num3 > num1 && num3 > num2){
		greatest = num3;
	}

	return greatest;
}
