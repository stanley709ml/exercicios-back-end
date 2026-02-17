#include <stdio.h>
#include <ctype.h>

int main(){

	char continue_stop0 = '\0';
	char continue_stop = '\0';
	int num, ammount_nums, lowest_value, total_even;
	float medium, sum_nums;

	ammount_nums = 0;
	num = 0;
	sum_nums = 0;
	lowest_value = 9999999;
	total_even = 0;
	medium = 0;

	do{
	
		printf("Insert a number: ");
		scanf("%d", &num);

		sum_nums += num;
		ammount_nums++;

		if(num < lowest_value){
			lowest_value = num;
		}

		if(num % 2 == 0){
			total_even++;
		}

		printf("Do you want to continue this program (Y/N)? ");
		scanf(" %c", &continue_stop0);

		continue_stop = toupper(continue_stop0);

		getchar();

	}while(continue_stop == 'Y');

	medium = sum_nums / ammount_nums; 

	printf("\nThe sum of all the numbers above is %.0f\n", sum_nums);
	printf("The lowest value inserted was %d\n", lowest_value);
	printf("The medium of all the numbers above is %.1f\n", medium);
	printf("The ammount of numbers above that are even is %d\n", total_even);
		
	return 0;
}
