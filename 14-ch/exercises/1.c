// Write a parameterized macros that compute the following values.
//  (a) The cube of x.
//  (b) The remainder when n is divided by 4
//  (c) 1 if the product of x and y is less than 100, 0 otherwise
// Do your macros alwats work? If not, describe what arguments would make them
// fail.
#include <stdio.h>

#define CUBED(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define IDK(x, y) (((x) * (y)) < 100 ? 1 : 0)

int main(void) {
  int x = 999, n = 21, y = 2;

  printf("%d cubed: %d\n", x, CUBED(x));
  printf("Remainder of %d/4: %d\n", n, REMAINDER(n));
  printf("%d\n", IDK(x, y));
}
