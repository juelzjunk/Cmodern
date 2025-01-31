// Write the following parameterized macros.
//  (a) CHECK(x,y,n)  -- Has the value 1 if both x and y fall between 0 and n-1,
//                       inclusive.
//  (b) MEDIAN(x,y,z) -- Finds the median of x,y,z.
//  (c) POLYNOMIAL(x) -- Computes the polynomial 3x^5+2x^4-5x^3-x^2+7x-6.
#include <stdio.h>

#define CHECK(x, y, n) ((x) >= 0 && (x) < (n) && (y) >= 0 && (y) < (n) ? 1 : 0)

#define MEDIAN(x, y, z)                                                        \
  ((x) > (y) && (x) < (z)   ? (x)                                              \
   : (x) > (z) && (x) < (y) ? (x)                                              \
   : (y) > (z) && (y) < (x) ? (y)                                              \
   : (y) > (x) && (y) < (z) ? (y)                                              \
                            : (z))

#define POLYNOMIAL(x)                                                          \
  ((3 * ((x) * (x) * (x) * (x) * (x))) + (2 * ((x) * (x) * (x) * (x))) -       \
   (5 * ((x) * (x) * (x))) - ((x) * (x)) + (7 * (x)) - 6)
int main(void) {
  printf("%d\n", CHECK(2, 4, 5));
  printf("%d\n", MEDIAN(6, 5, 8));
  printf("%d\n", POLYNOMIAL(2));
}
