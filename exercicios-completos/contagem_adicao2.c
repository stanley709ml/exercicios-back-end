#include <stdio.h>

int main(){
	
	int x, y, z, v, add;

	printf("Say the first integer number: ");
	scanf("%d", &x);

	printf("Say the last integer number: ");
	scanf("%d", &y);

	printf("Say the increase integer number: ");
	scanf("%d", &add);

	if(x > y){
		while(y < x){
			y += add;
			printf("%d\n", y);
		}
	}else{
		while(x < y){
			x += add;
			printf("%d\n", x);
		}		
	} printf("Acabou!\n");

	return 0;
}

