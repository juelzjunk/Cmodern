/*
 * Write the following function:
 * void swap (int *p, int *q);
 *
 * When passed the addresses of two variables,
 * swap should exchange the values of the variables:
 *
 * swap(&i, &j);    exchanges values of i and j
 */

#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
  int i = 22, j = 4;
  printf("Before swap: i=%d, j=%d\n", i, j);
  swap(&i, &j);
  printf("After swap: i=%d, j=%d\n", i, j);
}

// void swap(int *p, int *q) {
//   int a, b;
//
//   a = *p;
//   b = *q;
//   *p = b;
//   *q = a;
// }
// ANSWER
void swap(int *p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}
