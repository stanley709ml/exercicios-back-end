#include <stdio.h>

int main(){
	
	int sum, num1, num2, num3, num4, num5, num6, num7;

	printf("Choose an integer number: ");
	scanf("%d", &num1);
	
	printf("Choose another integer number: ");
	scanf("%d", &num2);


	printf("Choose another integer number: ");
	scanf("%d", &num3);


	printf("Choose another integer number: ");
	scanf("%d", &num4);


	printf("Choose another integer number: ");
	scanf("%d", &num5);


	printf("Choose another integer number: ");
	scanf("%d", &num6);


	printf("Choose another integer number: ");
	scanf("%d", &num7);

	sum = num1 + num2 + num3 + num4 + num5 + num6 + num7;

	printf("The total of the sum of all the numbers above is %d\n", sum);

	return 0;
}
