#include <stdio.h>

int main(){
    
     char name[50];
     float salary, years, new_salary;
     
     printf("What's your salary? ");
     scanf("%f", &salary);
     
     printf("For how many years you have been in this company? ");
     scanf("%f", &years);
     
     if(years >= 10){
          new_salary = (salary * 20 / 100) + salary;
          printf("Wow. You have been there for %.1f years!\nYou will get a raise of 20 percent and your new salary is $%.2f\n", years, new_salary); 
     }else if(years >= 3 && years < 10){
          new_salary = (salary * 12.5 / 100) + salary;
          printf("You have been there for %.1f years.\nYou will get a raise of 12.5 percent and your new salary is $%.2f\n", years, new_salary);
     }else{
          new_salary = (salary * 3 / 100) + salary;
          printf("You have been there for %.1f years.\nYou will get a raise of 3 percent and your new salary is $%.2f\n", years, new_salary);
     }

    return 0;
}