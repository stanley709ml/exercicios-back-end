#include <stdio.h>

int main(){
	int x;
	int even_odd;

	printf("Choose an integer number: ");
	scanf("%d", &x);

	even_odd = x % 2;

	if(even_odd == 0){
		printf("%d is even\n", x);
	}else{
		printf("%d is odd\n", x);
	}
}
