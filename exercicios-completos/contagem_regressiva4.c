#include <stdio.h>

int main(){
	
	int x = 30;
	int y = x;

	printf("%d\n", x);

	while(x > 0){
		x -= 1;
		y -= 1;

		if(x % 4 != 0){
			printf("%d\n", x);
		}

		if(y % 4 == 0){
			if(y > 1){
				printf("[%d]\n", y);
			}
		}
	}

	return 0;
}
