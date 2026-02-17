#include <stdio.h>

int main(){
    
    int age;
    int sum;
    int total_students;
    float medium;
    
    sum = 0;
    medium = 0;
    total_students = 0;
    
    while(1){
        printf("Insert the age of an student: ");
        scanf("%d", &age);
        
        if(age == 999){
            break;
        }else{
            total_students++;
        }
        
        sum += age;
        medium = sum / total_students;
    }
    
    printf("\nThere are %d students\n", total_students);
    printf("The medium of the age of the students is %.1f\n", medium);
    
    return 0;
}
