#include <stdio.h>

int main(){

	float speed;
	float total;
	float kmh_high;
	const int fine = 5;	


	printf("What's the speed of the car? ");
	scanf("%f", &speed);
	
	kmh_high = speed - 80;
	total = kmh_high * fine;

	if(speed > 80){
		printf("You're fined.\nThe speed limit is 80km/h.\n$5 by km/h higher.\nYour total is $%.2f\n", total);
	}else{
		printf("You're good to go\n");
	}

	return 0;
}
