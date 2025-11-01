#include<stdio.h>
#include<stdbool.h>

int main() {
    float price = 10.00;
    bool isstudent = true;
    bool issenior = false;

    if(isstudent){
        if(issenior){
                    printf("you get a student discount of 10%\n");
                    printf("you get a senior discount of 20%\n ");
                    price *= 0.7;        
        }
        else{
            printf("you get a discount of 10%\n ");
            price *= 0.9;
        }    
    }
    else{
        if(issenior){
            printf("you get a discount of 20%\n");
            price *= 0.8;
        }
    }
    printf("the price of the ticket is : $%.2f\n ", price);

}
