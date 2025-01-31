// Write the following function:
//
// double inner_product(const double *a, const double *b, int n);
//
// a and b both point to arrays of length n. the function should return
// a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]
// Use pointer arithmetic-not subscripting- to visit array elements.

#include <stdio.h>

#define N 4

double inner_product(const double *a, const double *b, int n);

int main(void) {
  const double array1[] = {1, 2, 3, 4}, array2[] = {1, 2, 3, 4};
  printf("%lf\n", inner_product(&array1[0], &array2[0], N));
  // 30.000000
}
double inner_product(const double *a, const double *b, int n) {
  double product = 0;
  // a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]
  const double *p1, *p2;
  for (p1 = a, p2 = b; p1 < a + N; p1++, p2++)
    product += *p1 * *p2;

  return product;
}
