#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
void make_empty(void);

bool is_empty(void);

bool is_full(void);

void stack_overflow(void);
void stack_underflow(void);

void push(int i);

int pop(void);
#endif
