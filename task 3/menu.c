#include <stdio.h>
#include "functions.h"

int main() {

  while (1) {
    printf("1.addition\n2.substraction\n3.multiplication\n4.division\n5.exit\n");
    int choice, number1, number2;
    scanf("%d", &choice);

    if (choice == 1) {
      printf("enter first number\n");
      scanf("%d", &number1);
      printf("enter second number\n");
      scanf("%d", &number2);
      int summma = sum(number1, number2);
      printf("result = %d\n", summma);
    } else if (choice == 2) {
      printf("enter first number\n");
      scanf("%d", &number1);
      printf("enter second number\n");
      scanf("%d", &number2);
      int substraction = sub(number1, number2);
      printf("result = %d\n", substraction);
    } else if (choice == 3) {
      printf("enter first number\n");
      scanf("%d", &number1);
      printf("enter second number\n");
      scanf("%d", &number2);
      int multiplication = mul(number1, number2);
      printf("result = %d\n", multiplication);
    } else if (choice == 4) {
      printf("enter first number\n");
      scanf("%d", &number1);
      printf("enter second number\n");
      scanf("%d", &number2);
      int division = dif(number1, number2);
      printf("result = %d\n", division);
    } else if (choice == 5) {
      break;
    }
    else{
        break;
    }
  }
}

