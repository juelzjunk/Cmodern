// Modify project 6 chapter 10 so that it includes the following function:
//  int evaluate_RPN_expression(const char *expression);
// The function returns the value of the RPN expression pointed to by
// expression.

#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

/**********************STACKCODE*******************************/
int contents[STACK_SIZE];
int top = 0;
void make_empty(void) { top = 0; }
bool is_empty(void) { return top == 0; }
bool is_full(void) { return top == STACK_SIZE; }
void stack_overflow(void) { printf("STACK OVERFLOW!\n"); }
void stack_underflow(void) { printf("STACK UNDERFLOW!\n"); }
void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else
    contents[top++] = i;
}
int pop(void) {
  if (is_empty()) {
    stack_underflow();
    return 1;
  } else
    return contents[--top];
}
/**********************STACKCODE*******************************/

int evaluate_RPN_expression(const char *expression) {
  int answer = 0, lastanswer = 0;
  for (; *expression; expression++)
    switch (*expression) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      push(*expression - '0');
      break;
    case '+':
      answer = pop() + pop();
      push(answer);
      break;
    case '-':
      lastanswer = pop();
      answer = pop() - lastanswer;
      push(answer);
      break;
    case '*':
      answer = pop() * pop();
      push(answer);
      break;
    case '/':
      lastanswer = pop();
      answer = pop() / lastanswer;
      push(answer);
      break;
    case '=':
      return answer;
      break;
    }
  return 0;
}

int main(void) {
  char expression[STACK_SIZE] = {0};
  printf("Enter an RPN expression: ");
  fgets(expression, STACK_SIZE, stdin);
  printf("RPN Value: %d\n", evaluate_RPN_expression(expression));
}
