#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

	int greaterThan5, divis_3, max, min, num;

    greaterThan5 = 0;
    divis_3 = 0;
    max = 9;
    min = 1;

    printf("The numbers the computer chose are:\n");

    for(int i = 1; i <= 20; i++){
        num = (rand() % (max - min + 1) + min);
        printf("[%d] ", num);
        
        if(num > 5){
            greaterThan5++;
        }
        if(num % 3 == 0){
            divis_3++;
        }
    }

    printf("\nThe total of numbers that are greater than 5 is %d\n", greaterThan5);
    printf("The total of numbers that are divisible by 3 is %d\n", divis_3);

	return 0;
}
