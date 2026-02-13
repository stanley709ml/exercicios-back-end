#include <stdio.h>

int main(){

	float width, length, area;

	printf("What's the width of the land? ");
	scanf("%f", &width);

	printf("What's the length of the land? ");
	scanf("%f", &length);

	area = width * length;

	if(area > 500){
		printf("The area of the land is %.2fm²\nYour land is also an VIP land!\n", area);
	}else if(area < 500 && area > 100){
		printf("The area of the land is %.2fm²\nYour land is also an MASTER land!\n", area);
	}else{
		printf("The area of the land is %.2fm²\nYour land is also an POPULAR land!\n", area);
	}

	return 0;
}
