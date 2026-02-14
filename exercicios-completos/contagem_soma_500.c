#include <stdio.h>

int main(){
	
	int x;
	int sum = 0;

	for(x = 0; x <= 500; x += 50){
		sum += x;
	}

	while(x > 0){
		x -= 50;
		printf("%d + ", x);
	} printf("= %d\n", sum);

	return 0;
}
