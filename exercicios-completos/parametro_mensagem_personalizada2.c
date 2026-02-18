#include <stdio.h>

void Gerador(char message[50], int times);

int main(){

	Gerador("Aprendendo portugol", 8);

	return 0;
}

void Gerador(char message[50], int times){
	printf("+------------------+\n");
	for(int i = 0; i < times; i++){
		printf("%s\n", message);
	}	
	printf("+------------------+\n");
}


