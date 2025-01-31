// Write a program that evaluates RPN (Reverse Polish Notation) expressions.

#include "stack.h"
#include <stdbool.h>
#include <stdio.h>

/********************************
 * MY CODE????????????????????? *
 ********************************/

int main(void) {
  while (1) {
    char ch = 0;
    int answer = 0, n = 0;
    // make it loop
    printf("Enter an RPN expression: ");
    while (ch != '=') {
      scanf(" %c", &ch);
      switch (ch) {
      case '0':
        push(0);
        break;
      case '1':
        push(1);
        break;
      case '2':
        push(2);
        break;
      case '3':
        push(3);
        break;
      case '4':
        push(4);
        break;
      case '5':
        push(5);
        break;
      case '6':
        break;
      case '7':
        push(7);
        break;
      case '8':
        push(8);
        break;
      case '9':
        push(9);
        break;

      case '+':
        answer = pop() + pop();
        push(answer);
        break;
      case '-':
        n = pop();
        answer = pop() - n;
        push(answer);
        break;
      case '*':
        answer = pop() * pop();
        push(answer);
        break;
      case '/':
        n = pop();
        answer = pop() / n;
        push(answer);
        break;
      case '=':
        printf("Value of expression: %d\n", answer);
        make_empty();
        break;
      default:
        return 0;
      }
    }
  }
}
