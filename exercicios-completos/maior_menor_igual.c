#include <stdio.h>

int main(){

	int x, y;

	printf("Choose an integer number: ");
	scanf("%d", &x);

	printf("Choose another integer number: ");
	scanf("%d", &y);

	if(x > y){
		printf("%d is greater than %d\n", x, y);
	}else if(y > x){
		printf("%d is greater than %d\n", y, x);
	}else{
		printf("They're both equal to each other\n");
	}

	return 0;
}
