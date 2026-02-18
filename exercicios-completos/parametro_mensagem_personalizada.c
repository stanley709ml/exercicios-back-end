#include <stdio.h>

void Gerador(char message[50]);

int main(){

	Gerador("Aprendendo portugol");

	return 0;
}

void Gerador(char message[50]){
	printf("+------------------+\n");
	printf("%s\n", message);
	printf("+------------------+\n");
}
