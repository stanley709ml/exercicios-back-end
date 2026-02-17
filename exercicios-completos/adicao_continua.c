#include <stdio.h>

int main(){
    
    int num, sum;
    
    sum = 0;
    
    while(1){
        printf("Type in an integer number: ");
        scanf("%d", &num);
        
        if(num == 1111){
            break;
        }
        
        sum += num;
    }
    
    printf("\nThe addition of all the numbers above is %d\n", sum);
    
    return 0;
}
