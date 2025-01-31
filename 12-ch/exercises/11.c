
// Modify the find_largest function so that it uses pointer arithmetic
//
// int find_largest(int a[], int n) {
//
//   int i, max;
//
//   max = a[0];
//   for (i = 1; i < n; i++)
//     if (a[i] > max)
//       max = a[i];
//   return max;
// }
#include <stdio.h>

#define N 10

int find_largest(int a[], int n);
int main(void) {
  int a[] = {99, 2, 3, 8, 9, 3, 4, 101, 9, 2};
  printf("%d\n", find_largest(a, N));
}
int find_largest(int a[], int n) {

  int *pA, max;
  pA = a;
  for (pA = a, max = *pA; pA < a + n; pA++)
    if (*pA > max)
      max = *pA;
  return max;
}
