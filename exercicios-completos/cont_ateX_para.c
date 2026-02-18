#include <stdio.h>

int main(){
	
	int x;

	printf("Choose a number: ");
	scanf("%d", &x);

	for(int i = 0; i <= x; i++){
		printf("%d, ", i);
	}

	printf("FIM!\n");

	return 0;
}
