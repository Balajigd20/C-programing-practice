#include<stdio.h>
#include<stdbool.h>
void hello(char name[], int age);
bool agecheck(int age);
int main(){
    hello("balaji", 18);

    if(agecheck(18)){
        printf("you are old enough to work ");
    }
    else{
        printf("you muxt be 16+ to work");
    }

    return 0;
}
void hello(char name[],int age){
    printf("Hello %s\n", name);
    printf("you are %d years young\n", age); 
}

bool agecheck(int age){
    return age >= 16;
}