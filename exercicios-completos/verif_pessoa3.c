#include <stdio.h>

int main(){
    
    int ammount_people, gender, age, continue_stop, older_age, men, youngest_woman, sum;
    float medium;
    
    sum = 0;
    older_age = 0;
    men = 0;
    youngest_woman = 999;
    ammount_people = 0;
    
    while(1){
        printf("What's the person's gender?\n1. Male\n2. Female\nAnswer: ");
        scanf("%d", &gender);
        
        printf("What's the age of the person? ");
        scanf("%d", &age);
    
        ammount_people++;
        sum += age;
    
        if(age > older_age){
            older_age = age;
        }
        
        if(gender == 1){
            men++;
        }
        
        if(youngest_woman == 999){
            youngest_woman = 0;
        }else if(age < youngest_woman && gender == 2){
            youngest_woman = age;
        }
        
        printf("\nDo you want to continue this program?\n1. Yes\n2. No ");
        scanf("%d", &continue_stop);
        
        if(continue_stop == 2){
            break;
        }
    }
    
    if(ammount_people > 0){
        medium = sum / ammount_people;
    }else{
        medium = 0;   
    }
    
    printf("\nThe oldest person is %d years old\n", older_age);
    printf("The ammount of men registred is %d\n", men);
    printf("The youngest woman is %d\n", youngest_woman);
    printf("The medium of all the ages above is %.1f\n", medium);
    
    return 0;
}
