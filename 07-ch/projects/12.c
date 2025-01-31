// Write a program that evaluates an expression:
//
//  Enter an expression: 1+2.5*3
//  Value of expression: 10.5
//
//  operands are floating-point numbers
//  the operators are +,-,*, and /.
//  expression is evaluated from left to right ( no operator precedence)

#include <stdio.h>

int main() {
  float i = 0, value = 0;
  char op;

  printf("Enter an expression: ");
  scanf(" %f%c", &value, &op);

  do {
    switch (op) {
    case ' ':
      scanf("%c", &op);
      break;
    case '+':
      scanf(" %f%c", &i, &op);
      value += i;
      break;
    case '-':
      scanf(" %f%c", &i, &op);
      value -= i;
      break;
    case '*':
      scanf(" %f%c", &i, &op);
      value *= i;
      break;
    case '/':
      scanf(" %f%c", &i, &op);
      value /= i;
      break;
    default:
      printf("Invalid operand\n");
      return 0;
    };
  } while (op != '\n');
  printf("Value of expression: %g\n", value);
}
