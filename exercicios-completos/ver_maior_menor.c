#include <stdio.h>

int main(){
    
    float prices[8];
    float highest;
    float lowest;
    
    for(int i = 0; i < 8; i++){
        printf("Enter the price: ");
        scanf("%f", &prices[i]);
    }
    
    highest = prices[0];
    lowest = prices[0];
    
    for(int i = 1; i < 8; i++){
        if(prices[i] > highest){
            highest = prices[i];
        }
        if(prices[i] < lowest){
            lowest = prices[i];
        }
    }
    
    printf("The highest price is $%.2f\n", highest);
    printf("The lowest price is $%.2f\n", lowest);
    
    return 0;
}
