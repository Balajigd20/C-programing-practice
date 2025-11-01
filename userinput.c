#include <stdio.h>

int main(){

    int age = 0 ;
    float gpa = 0.0f ;
    char grade = '0/';
    char name[30] = "" ;

    printf("Enter your age :\n");
    scanf("%d", &age);

    printf("enter your gpa :\n");
    scanf("%f", &gpa);

    printf("enter your grade \n");
    scanf("%c", &grade);


    getchar();
    printf("enter your name : \n");
    fgets(name , sizeof(name) , stdin);

    

    printf("%d\n" , age);
    printf("%f\n" , gpa);
    printf("%c\n" , grade);
    printf("%s\n" , name);

    return 0;
}