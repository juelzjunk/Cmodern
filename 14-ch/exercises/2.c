// Write a macro NELEMS(a) that computes the number of elements in a
// one-dimensional array.
// Hint: See the discussion of the sizeof operator in
// Section 8.1.
#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void) {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("%lu\n", NELEMS(a));
}
