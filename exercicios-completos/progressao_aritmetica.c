#include <stdio.h>

int main(){
	
	int x, y, z;

	printf("Insert the first term: ");
	scanf("%d", &x);

	printf("Insert the ratio: ");
	scanf("%d", &y);

	printf("%d ", x);

	for(int i = 1; i < 10; i++){
		z = x + (y * i);
		printf("%d ", z);		
	}

	return 0;
}
