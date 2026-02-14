#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    
    int max, min, ran_num, guess, guess_num, remaining_guesses;
    
    guess_num = 0;
    
    max = 10;
    min = 1;
    
    ran_num = (rand() % (max - min + 1) + min);
    
    do{
        printf("Guess the number (1-10) ");
        scanf("%d", &guess);
        
        if(guess == ran_num){
            printf("That's right! You guessed the correct number (%d)\n", ran_num);
            break;
        }else{
            guess_num += 1;
            remaining_guesses = 4 - guess_num;
            printf("Wrong number. You have %d guesses left. Try again\n", remaining_guesses);
        }
    }while(remaining_guesses != 0);
    
    return 0;
}
