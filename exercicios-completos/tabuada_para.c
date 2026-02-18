#include <stdio.h>

int main(){
	int x;
	int tab;

	printf("Choose a number you want to see its multiplication table: ");
	scanf("%d", &x);

	for(int i = 1; i <= 10; i++){
		tab = x * i;

		printf("%d * %d = %d\n", x, i, tab);		
	}
}
