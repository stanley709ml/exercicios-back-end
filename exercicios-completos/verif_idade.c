#include <stdio.h>

int main(){
    
    int age[10];
    int above_18, under_5, highest;
    float medium;
    
    for(int i = 0; i < 10; i++){
        printf("Tell me the %d° age: ", i + 1);
        scanf("%d", &age[i]);
    }
    
    above_18 = 0;
    under_5 = 0;
    highest = age[0];
    medium = (age[0] + age[1] + age[2] + age[3] + age[4] + age[5] + age[6] + age[7] + age[8] + age[9]) / 8;
    
    for(int i = 1; i < 10; i++){
        if(age[i] > highest){
            highest = age[i];
        }
        
        if(age[i] > 18){
            above_18++;
        }
        
        if(age[i] < 5){
            under_5++;
        }
    }
    
    printf("The highest age is %d\n", highest);
    printf("The medium of all the ages above is %.2f\n", medium);
    printf("The ammount of people above 18 is %d\n", above_18);
    printf("The ammount of people under 5 is %d\n", under_5);
    
    return 0;
}
