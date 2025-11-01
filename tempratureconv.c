#include<stdio.h>

int main(){
    char choice = 0;
    float farenheit = 0.0f;
    float celcius = 0.0f;

    printf("temprate converter program ");
    printf("C. Celcius to farenheit\n");
    printf("f. farenheit to celcius\n");
    printf("Is the temp in celsius (c) or farenheit (F) : ");
    scanf("%c", &choice);

    if(choice == 'C'){
        printf("enter the temprature in celcius : ");
        scanf("%f" , &celcius);
        farenheit = (celcius * 9/5) + 32;
        printf("%.1f celcius is equal to %.1f farenheit\n", celcius, farenheit);
    }
    else if(choice == 'F'){
        printf("enter the temprature in farenheit : ");
        scanf("%f" , &farenheit);
        celcius  = (farenheit - 32) * 5/9 ;
        printf(".1f farenheit is equal to %.1f celcius\n", farenheit , celcius);

    }
    else{
        printf("INVALID CHOCE!! please select C or F");
    }



}