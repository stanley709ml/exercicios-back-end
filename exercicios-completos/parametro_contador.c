#include <stdio.h>

void contador(int start, int end, int increase);

int main(){

	int begin, finish, add;

	printf("Choose the number to start the counting: ");
	scanf("%d", &begin);
	printf("Choose the number to end the counting: ");
	scanf("%d", &finish);
	printf("Choose the number to increase the counting: ");
	scanf("%d", &add);

	contador(begin, finish, add);

	return 0;	
}

void contador(int start, int end, int increase){	

	for(int i = start; i < end; i += increase){
		printf("%d\n", i);
	}

	printf("FIM\n");
}
