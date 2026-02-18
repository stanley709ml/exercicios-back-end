#include <stdio.h>

void Gerador(char message[50], int times, int border_type);

int main(){
	
	int num, times_appear;

	printf("What border type do you want?\n 1. +---------------+\n2. ~~~~~~~:::::::~~~~~~~\n3.<<<<<<<<<-------->>>>>>>>\n");
	scanf("%d", &num);

	printf("How many times do you want to print the message? ");
	scanf("%d", &times_appear);

	Gerador("Aprendendo portugol", times_appear, num);

	return 0;
}

void Gerador(char message[50], int times, int border_type){
	if(border_type == 1){
		printf("\n+-------------------+\n");
		for(int i = 0; i < times; i++){
			printf("%s\n", message);
		}
		printf("+-------------------+\n");
	}else if(border_type == 2){
		printf("\n~~~~~~~~::::::::::~~~~~~~~\n");
		for(int j = 0; j < times; j++){
			printf("%s\n", message);
		}
		printf("~~~~~~~~::::::::::~~~~~~~~\n");
	}else if(border_type == 3){
		printf("\n<<<<<<<<---------->>>>>>>>\n");
		for(int k = 0; k < times; k++){
			printf("%s\n", message);
		}
		printf("<<<<<<<<---------->>>>>>>>>\n");
	}
}


