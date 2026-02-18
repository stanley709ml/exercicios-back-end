#include <stdio.h>
#include <string.h>

int main(){

	char names[7][50] = {0};

	for(int i = 0; i < 7; i++){
		printf("Say the name of the person: ");
		fgets(names[i], sizeof(names[i]), stdin);
		names[i][strcspn(names[i], "\n")] = '\0';
	}

	for(int j = 6; j >= 0; j--){
		printf("%s\n", names[j]);
	}	

	return 0;
}
