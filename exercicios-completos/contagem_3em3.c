#include <stdio.h>

int main(){
	
	int x = 0;	

	printf("%d ", x);

	do{
		x += 3;
		printf("%d ", x);	
	}while(x < 30);

	return 0;
}
