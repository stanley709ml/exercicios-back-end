#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int a;
	int b;
	int c;
	int d;
} Square_lenghts;

int main() {

	Square_lenghts *lenghts;
	
	char get_ammountLenghts[10];
	char get_lenghts[20];
	int ammountLenghts;

	printf("");
	fgets(get_ammountLenghts, sizeof(get_ammountLenghts), stdin);
	sscanf(get_ammountLenghts, "%d", &ammountLenghts);

	lenghts = malloc(ammountLenghts * sizeof(Square_lenghts));

	if (!lenghts) {
		printf("Memory allocation failed.\n");
		exit(1);
	}

	for (int i = 0; i < ammountLenghts; i++) {
		printf("");
		fgets(get_lenghts, sizeof(get_lenghts), stdin);
		sscanf(get_lenghts, "%d %d %d %d", &lenghts[i].a, &lenghts[i].b, &lenghts[i].c, &lenghts[i].d);
	
		strcpy(get_lenghts, "");
	}	

	printf("\n");

	for (int l = 0; l < ammountLenghts; l++) {
		if (lenghts[l].a == lenghts[l].b && lenghts[l].b == lenghts[l].c && lenghts[l].c == lenghts[l].d) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}

	free(lenghts);

	return 0;

}
