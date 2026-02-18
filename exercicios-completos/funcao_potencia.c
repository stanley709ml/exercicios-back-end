#include <stdio.h>

int potencia(int base, int exponente);

int main(){

	int num0, num;

	printf("Choose the base (integer): ");
	scanf("%d", &num0);

	printf("Choose the exponent (integer): ");
	scanf("%d", &num);

	int resultado = potencia(num0, num);

	printf("%d\n", resultado);

	return 0;
}

int potencia(int base, int exponente){
	int result = 1;

	for(int i = 0; i < exponente; i++){
		result *= base;
	}

	return result;
}
