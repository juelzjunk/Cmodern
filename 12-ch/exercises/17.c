// Rewrite the following function to use pointer arithmetic instead of array
// subscripting. (In other words, eliminate the variable i and j and all uses
// of the [] operator.) Use a single loop instead of nested loops.
//
// int sum_two_dimensional_array(const int a[][LEN], int n) {
//   int i, j, sum = 0;
//   for (i = 0; i < n; i++)
//     for (j = 0; j < LEN; j++)
//       sum += a[i][j];
//   return sum;
// }
#include <stdio.h>
#define LEN 10
#define N 2

int sum_two_dimensional_array(const int a[][LEN], int n);
int main(void) {
  const int a[N][LEN] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                         {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
  printf("Sum = %d\n", sum_two_dimensional_array(a, N));
}

int sum_two_dimensional_array(const int a[][LEN], int n) {
  const int *pA;
  int sum = 0;
  for (pA = a[0]; pA <= &a[n - 1][LEN - 1]; pA++)
    sum += *pA;
  return sum;
}
