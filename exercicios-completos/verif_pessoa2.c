#include <stdio.h>

int main(){
    
    float weight[7];
    float height[7];
    float medium_height;
    int above90kg, under50kg_under160m, above100kg_above190m;
    
    for(int i = 0; i < 7; i++){
        printf("What's the weight of the %d° person? ", i + 1);
        scanf("%f", &weight[i]);
    }
    
    for(int i = 0; i < 7; i++){
        printf("\nWhat's the height of the %d° person? ", i + 1);
        scanf("%f", &height[i]);
    }
    
    medium_height = (height[0] + height[1] + height[2] + height[3] + height[4] + height[5] + height[6]) / 7;
    under50kg_under160m = 0;
    above100kg_above190m = 0;
    above90kg = 0;
    
    for(int i = 0; i < 7; i++){
        if(weight[i] > 90){
            above90kg++;   
        }
        
        if(weight[i] < 50 && height[i] < 1.6){
            under50kg_under160m++;
        }
        
        if(height[i] > 1.9 && weight[i] > 100){
            above100kg_above190m++;
        }
    }
    
    printf("The medium height of those people is %.2f\n", medium_height);
    printf("The ammount of people that weighs above 90kg is %d\n", above90kg);
    printf("The ammount of people that weighs under 50kg and is under 1.50m is %d\n", under50kg_under160m);
    printf("The ammount of people that weighs above 100kg and is above 1.90m is %d\n", above100kg_above190m);
    
    return 0;
}
