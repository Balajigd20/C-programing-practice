#include<stdio.h>

int main(){
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("enter the first number: ");
    scanf("%lf", &num1);

    printf("enter the second number: ");
    scanf("%lf", &num2);

	printf("enter operator (+, -, *, /): ");
	scanf(" %c", &operator);

    switch(operator){
        case '+':
          result = num1 + num2;
          break;
        case '-':
          result = num1 - num2;
          break;
        case '*':
          result = num1 * num2;
          break;
        case '/':
		  if (num2 == 0.0){
		    printf("error: division by zero\n");
		    return 1;
		  }
		  result = num1 / num2;
		  break;
		default:
		  printf("error: invalid operator '%c'\n", operator);
		  return 1;
    }
	printf("result: %.4lf\n", result);

    return 0;
}