#include <stdio.h>

int main(){

	int x = 100;

	printf("%d\n", x);

	while(x > 0){
		x -= 5;
		printf("%d\n", x);
	} printf("Acabou!\n");

	return 0;
}
