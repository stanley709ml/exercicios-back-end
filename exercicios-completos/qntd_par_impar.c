#include <stdio.h>

int main(){

	int num, total_even, total_odd;

	total_even = 0;
	total_odd = 0;

	for(int i = 1; i <= 6; i++){
		printf("Choose the %d° number: ", i);
		scanf("%d", &num);

		if(num % 2 == 0){
			total_even++
		}else{
			total_odd++
		}
	}

	printf("The total of even numbers is %d\n", total_even);
	printf("The total of odd numbers is $d\n", total_odd);

	return 0;
}