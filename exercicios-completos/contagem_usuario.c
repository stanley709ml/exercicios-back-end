#include <stdio.h>

int main(){
	
	int x;
	int y = 0;

	printf("Choose an positive integer number: ");
	scanf("%d", &x);

	while(y < x){
		y += 1;
		printf("%d\n", y);
	} printf("Acabou!\n");

	return 0;
}
