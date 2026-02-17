#include <stdio.h>

int main(){
    
    int age[5];
    int gender[5];
    int total_male, total_female;
    float medium_age, medium_male_age, sum_age, women_above_20;
    
    for(int i = 0; i < 5; i++){
        printf("\nWhat's the %d° person gender?\n1. Male\n2. Female\n", i + 1);
        scanf("%d", &gender[i]);
    }
    
    for(int i = 0; i < 5; i++){
        printf("What's the %d° person age? ", i + 1);
        scanf("%d", &age[i]);
    }
    
    total_male = 0;
    total_female = 0;
    medium_age = (age[0] + age[1] + age[2] + age[3] + age[4]) / 5;
    women_above_20 = 0;
    
    for(int i = 0; i < 5; i++){
        if(gender[i] == 1){
            total_male++;
        }else if(gender[i] == 2){
            total_female++;
            if(age[i] > 20){
                women_above_20++;
            }
        }
        
        if(gender[i] == 1){
            sum_age += age[i];
        }
    }
    
    medium_male_age = sum_age / total_male;
    
    printf("\nThere are %d men\n", total_male);
    printf("There are %d females\n", total_female);
    printf("The medium age of the group is %.1f\n", medium_age);
    printf("The medium age of men is %.1f\n", medium_male_age);
    printf("There are %.0f females above 20 years old\n", women_above_20);
    
    return 0;
}
