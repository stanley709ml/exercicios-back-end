#include <stdio.h>

void freightpricing(float km);

int main(){

    float km;

    printf("How many kilometers away do you wish to travel?\nFor trips until 200km, the price is $0.5 per km\nFor trips over 200km, the price is $0.45 per km\n");
    scanf("%f", &km);

    if(km > 0){
        freightpricing(km);
    }else{
        printf("Insert a valid distance.");
    }

    return 0;
}

void freightpricing(float km){

    float pricePerKm;
    float total;

    if(km > 200){

        pricePerKm = 0.45;
        total = km * pricePerKm;

        printf("Your total is $%.2f ($%.2f per km)", total, pricePerKm);

    }else{

        pricePerKm = 0.5;
        total = km * pricePerKm;

        printf("Your total is $%.2f ($%.2f per km)", total, pricePerKm);
    }
}