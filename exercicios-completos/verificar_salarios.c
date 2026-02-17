#include <stdio.h>

int main(){
    
    int gender;
    int continue_stop;
    int total_people;
    float salary;
    float total_salary_male;
    float total_salary_female;
    
    total_salary_male = 0;
    total_salary_female = 0;
    
    while(1){
        printf("What's your gender?\n1. Male\n2. Female\nAnswer: ");
        scanf("%d", &gender);
        
        printf("What's your salary? ");
        scanf("%f", &salary);
        
        if(gender == 1){
            total_salary_male += salary;
            total_people++;
        }
        
        if(gender == 2){
            total_salary_female += salary;
            total_people++;
        }
        
        
        printf("The total salary for the mens is $%.2f\nThe total salary for the womans is $%.2f\n\nDo you want to continue?\n1. Yes\n2. No, that's all\nAnswer: ", total_salary_male, total_salary_female);
        scanf("%d", &continue_stop);
        
        if(continue_stop == 1){
            printf("Ok.\n");
        }else if(continue_stop == 2){
            break;
            }
        }
    
        printf("\nBye bye!\n");
    
    return 0;
}
