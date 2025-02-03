// Section 15.2 describes a file, stack.c, that provides dunctions for storing
// integers in a stack. In that section, the stack was implemented as an array.
// Modify stack.c so that a stack is now stored as a linked list. Replace the
// contents and top variables by a single variable that points to the first node
// in the list (the "top" of the stack). Write the functions in stack.c so that
// they use this pointer. Remove the is_full function, instead having push
// return either true (if memory was available to create a node) or false (if
// not).

// void make_empty(void);
// int is_empty(void);
// int is_full(void);
// void push(int i);
// int pop(void);

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// #include <stdbool.h>
// #include <stdio.h>
// #define STACK_SIZE 100
// int contents[STACK_SIZE];
// int top = 0;
// /********************************
//  * STACK CODE FROM SECTION 10.2 *
//  ********************************/
// void make_empty(void) { top = 0; }
//
// bool is_empty(void) { return top == 0; }
//
// bool is_full(void) { return top == STACK_SIZE; }
//
// void stack_overflow(void) { printf("STACK OVERFLOW!\n"); }
// void stack_underflow(void) { printf("STACK UNDERFLOW!\n"); }
//
// void push(int i) {
//   if (is_full()) {
//     stack_overflow();
//   } else
//     contents[top++] = i;
// }
//
// int pop(void) {
//   if (is_empty()) {
//     stack_underflow();
//     return 1;
//   } else
//     return contents[--top];
// }

struct node {
  int value;
  struct node *next;
};

struct node *top; // contents and top

void make_empty(void) {
  struct node *temp;
  while (top != NULL) {
    temp = top;
    top = top->next;
    free(temp);
  }
}

bool is_empty(void) { return top == 0; }

bool push(int i) {
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    return false;
  }
  new_node->value = i;
  new_node->next = top;
  top = new_node;
  return true;
}

int pop(void) {
  if (is_empty()) {
    printf("***stack_overflow***\n");
    exit(EXIT_FAILURE);
  }

  int i;
  struct node *temp;
  i = top->value;
  temp = top;
  top = top->next;
  free(temp);
  temp = NULL;

  return i;
}
