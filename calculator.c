#include <stdio.h>
int main() {
  double number, result=0;
  char operator;
  while (1) {
    printf("Choose the Operation (+, -, *, /)(addition, subtraction, multiplication and division), if you wanna leave the program, press 's': ");
    scanf(" %c", &operator);
    if (operator == 's') {
      printf("\nLeaving... see ya later");
      break;
    }
    switch (operator) {
      case '+' :
	printf("\nYou chose the addition operator, now provide the number you wanna sum here --> ");
	scanf("%lf", &number);
	printf("\nNow provide the number to be added --> ");
	scanf("%lf", &result);
	result += number;
	break;
      case '-' : 
	printf("\nYou chose the subtraction operator, now provide the number you wanna subtract here --> ");
        scanf("%lf", &number);
        printf("\nNow provide the number to be subtracted --> ");
        scanf("%lf", &result);
	result -= number;
	break;
      case '*' :
        printf("\nYou chose the multiplication operator, now provide the number you wanna multiply here --> ");
        scanf("%lf", &number);
        printf("\nNow provide the number to be multiplied --> ");
        scanf("%lf", &result);
        result *= number;
	break;
      case '/' :
	printf("\nYou chose the division operator, now provide the number you wanna divide here --> ");
	scanf("%lf", &number);
        printf("\nNow provide the number to be divided --> ");
        scanf("%lf", &result);
        result /= number;
	break;
      default :
	printf("\nInvalid Option, try again");
   }
  printf("\nResult: %lf\n", result);
  }
  return 0;
}
