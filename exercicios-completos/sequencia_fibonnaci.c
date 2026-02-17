#include <stdio.h>

int main(){
	
	int x = 0, y = 1;
	int z;

	for(int i = 1; i <= 10; i++){
		printf("%d ", x);

		z = x + y;
		x = y;
		y = z;
	}

	return 0;
}
