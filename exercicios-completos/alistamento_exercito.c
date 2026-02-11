#include <stdio.h>

int main(){
	int age;
	const int enlistment_age = 18;
	int been;
	int last;

	printf("What's your age? ");
	scanf("%d", &age);

	if(age > 18){
		been = age - 18;	
		printf("It has been %d years since you enlisted. Good job.\n", been);
	}else if(age == 18){
		printf("Time to enlist buddy.\n");
	}else{
		last = 18 - age;
		printf("In %d years you'll have to enlist. Good luck.\n", last);
	}
}
