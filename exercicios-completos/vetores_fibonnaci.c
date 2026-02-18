#include <stdio.h>

int main(){
	
	int x = 0, y = 1;
       	int z;
       	int v[15];	

	for(int i = 0; i <= 14; i++){
		z = x + y;
		x = y;
		y = z;

		if(x > 0){
			v[i] = x;
		}	

		printf("%d ", v[i]);	
	}	

	return 0;
}
