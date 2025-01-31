/*************************************************************************
 * Modify the stack example of Section 10.2 so that it stores characters *
 * instead of integers. Next, add a main function that asks the user to  *
 * enter a series of parentheses and/or braces, then indicates whether   *
 * or not they're properly nested:                                       *
 *      Enter parentheses and/or braces: ((){}{()})                      *
 *      Parentheses/braces are nested properly                           *
 *************************************************************************/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

// external variables
char contents[STACK_SIZE];
int top = 0;
// declarations
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
// main
int main(void) {
  make_empty();
  char ch = 0;

  printf("Enter parentheses and/or braces: ");
  while ((ch = getchar()) != '\n') {
    if (ch == '(' || ch == '{') {
      push(ch);
    }
    if ((ch == ')' && pop() != '(') || (ch == '}' && pop() != '{')) {
      printf("Parentheses/braces are not nested properly\n");
      return 1;
    }
  }
  if (top == 0) {
    printf("Parentheses/braces are nested properly\n");
    return 0;
  } else {
    printf("Parentheses/braces are not nested properly\n");
    return 1;
  }
}
// definitions
void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char ch) {
  if (is_full()) {
    printf("Stack over flow! the program will crash!\n");
    exit(1);
  } else
    contents[top++] = ch;
}

char pop(void) {
  if (is_empty()) {
    printf("Stack under flow! the program will crash!\n");
    return 1;
  } else
    return contents[--top];
}
