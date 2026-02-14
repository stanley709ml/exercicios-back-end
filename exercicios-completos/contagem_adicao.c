#include <stdio.h>

int main(){
	
	int x, y, add;

	printf("Say the first integer number: ");
	scanf("%d", &x);

	printf("Say the last integer number: ");
	scanf("%d", &y);

	printf("Say the increase integer number: ");
	scanf("%d", &add);

	while(x < y){
		x += add;
		printf("%d\n", x);
	} printf("Acabou!\n");

	return 0;
}
