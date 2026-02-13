#include <stdio.h>

int main(){

    float side1, side2, side3;
    float equal;

    printf("What's the size of the first side? ");
    scanf("%f", &side1);

    printf("What's the size of the second side? ");
    scanf("%f", &side2);

    printf("What's the size of the third side? ");
    scanf("%f", &side3);

    equal = (side1 + side2 + side3) - (side1 * 3);

    if(side1 + side2 > side3 || side2 + side1 > side3 || side3 + side2 > side1 || equal == 0){
	 printf("These sides can form an triangle\n");   
	 if(equal == 0){
		printf("This triangle will be an equilateral triangle.\n");
	} else if(side1 == side2 || side1 == side3 || side2 == side3 || side2 == side1 || side3 == side1 || side3 == side1){
		printf("This triangle will be an isosceles triangle.\n");
	} else{
		printf("This triangle will be an scaleno triangle.\n");
	}
    }else{
        printf("These three sides cannot form a triangle.\n");
    }

    return 0;
}
