#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

typedef float f32;
typedef double f64;

//ARRAY OF NUMBERS

void sortArray(f64 array[], int size_array) {
	for (int i = 0; i < size_array - 1; i++) {
		for (int j = 0; j < size_array - 1; j++) {
			if (array[j] > array[j+1]){
				f64 temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void printArray(f64 array[], int size_array) {
	for (int i = 0; i < size_array; i++) {
		printf("%.1lf, ", array[i]);
	}

	printf("\n");
}

// ARRAY OF CHARACTERS

void sortArrayOfCharacters(char array[], int size_array) {
	
	for (int x = 0; x < size_array; x++) {
		array[x] = toupper(array[x]);
	}	
	
	for (int i = 0; i < size_array - 1; i++) {
		for (int j = 0; j < size_array - 1; j++) {
			if (array[j] > array[j+1]) {
				char temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	for (int y = 0; y < size_array; y++) {
		array[y] = tolower(array[y]);
	}	
}

void printArrayOfCharacters(char array[], int size_array) {
	printf("\n");

	for (int i = 0; i < size_array; i++) {
		printf("%c", array[i]);	
	}

	printf("\n");
}

bool checkArrayOfCharacters(char array[], char array1[], int size_array) {
	bool sameLetters = false;	
		
	for (int i = 0; i < size_array; i++) {
		if (array[i] != array1[i]) {
			return false;	
		}
	}	

	return true;
}

int main() {

	char get_size_name[10];
	int size_name = 0;	

	printf("");
	fgets(get_size_name, sizeof(get_size_name), stdin);
	sscanf(get_size_name, "%d", &size_name);	
	
	
	char *name = malloc(size_name * 2 * sizeof(char));
	char *name1 = malloc(size_name * 2 * sizeof(char));	

	if (!name || !name1) printf("Memory Allocation Fail\n");	
	
	int real_size_name = size_name * 2;

	printf("");
	fgets(name, real_size_name, stdin);
	name[strcspn(name, "\n")] = '\0';		

	printf("");
	fgets(name1, real_size_name, stdin);
	name1[strcspn(name1, "\n")] = '\0';			

	int name_len = strlen(name);	

	sortArrayOfCharacters(name, name_len);
	sortArrayOfCharacters(name1, name_len);	

	if (checkArrayOfCharacters(name, name1, name_len)) {
		printf("TRUE\n");
	} else {
		printf("FALSE\n");
	}

	free(name);
	free(name1);

	return 0;
}
