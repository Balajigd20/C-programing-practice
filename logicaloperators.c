#include<stdio.h>
#include<stdbool.h>

int main(){
    bool issunny = false;

    if(issunny){
        printf("it is sunny outside");
    }
    else{
        printf("it is cloudy outside");
    }

    return 0;
}
/*int main(){
     int temp = 0;
     
     if(temp > 0 && temp < 30){
     printf("temprature is good ");
     }
     else{
     printf("the temprature is bad")
     }
}*/


/*
  int temp = 0;
    if(temp <= 0 || temp >= 30){
    printf("the temprature is BAD");
}
else{
    printf("the temprature is GOOD");
}
*/

// && = AND
// || = or
// ! = NOT