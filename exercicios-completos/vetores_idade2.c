#include <stdio.h>
#include <string.h>

int main(){
	
	char names[9][50] = {0};	
	int ages[9];

	for(int i = 0; i < 9; i++){
		printf("Say the name of the %d person: ", i + 1);
		fgets(names[i], sizeof(names[i]), stdin);
		names[i][strcspn(names[i], "\n")] = '\0';

		printf("Say the age of the %d person: ", i + 1);
		scanf("%d", &ages[i]);

		getchar();
	}

	printf("\nThese are the names of the persons that are under 18:\n");

	for(int j = 0; j < 9; j++){
		if(ages[j] < 18){
			printf("%s, %dy\n", names[j], ages[j]);
		}
	}

	return 0;
}
