#include <stdio.h>

void maior(float num1, float num2);

int main(){

	float num0, num;

	printf("Choose an number: ");
	scanf("%f", &num0);

	printf("Choose the other number: ");
	scanf("%f", &num);

	maior(num0, num);

	return 0;
}

void maior(float num1, float num2){
	if(num1 > num2){
		printf("%.0f is the largest number\n", num1);
	}else{
		printf("%.0f is the largest numbe\n", num2);
	}
}
